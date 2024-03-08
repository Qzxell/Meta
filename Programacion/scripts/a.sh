function dump_webpage() {
    echo -e "\n> Obteniendo casos de ejemplo desde ${ORANGE}$url${NC}\n"

    # Recuperación y análisis de los datos de la página web
    # PASOS para el análisis:
    # 1) Reemplazar todos los saltos de línea con el símbolo '|'
    # 2) Obtener los datos entre <pre></pre> -- Aquí es donde se encuentra la entrada y salida
    # 3) Eliminar todas las etiquetas HTML y reemplazar 'Output' con '=====' -- Esto separa los casos de prueba y la salida
    local webPageData=$(curl -L $url)
    check_error "Se produjo un error al cargar las páginas web."

    neededData=$(echo "$webPageData" | tr '\n' '|' | grep -o 'Example.*</pre>' | sed 's/<[^>]*>/\n/g' | sed 's/Examples//g' | sed 's/Example//g' | sed 's/Input/=====/g' | sed 's/Output/=====/g' | tr -s '\n' '|')

    # Comprobando si la variable neededData es NULL -- Esto ocurrirá si la página web no se cargó correctamente
    if [ -z "$neededData" ]; then
        echo -e "\n${RED}Error:${NC} No se pueden analizar los datos.\n${BLUE}Debug:${NC} ¡Asegúrate de estar en el directorio correcto!\n"
        echo "+-----DATOS DE LA PÁGINA WEB-----+"
        echo $webPageData
        echo "+-----+-----+-----+-----+"
        exit -1
    fi
}

