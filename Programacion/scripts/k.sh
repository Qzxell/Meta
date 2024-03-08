#!/bin/bash

# URL de la página web
url="https://codeforces.com/contest/1547/problem/D"

# Obtener el contenido de la página web
webPageData=$(curl -L $url)
if [ $? -ne 0 ]; then
    echo "Error al cargar la página web."
    exit 1
fi

# Extraer el contenido del div con clase 'ttypography' y eliminar las etiquetas HTML
divContent=$(echo "$webPageData" | grep -o '<div class="ttypography">.*</div>' | sed 's/<[^>]*>//g')
if [ -z "$divContent" ]; then
    echo "No se encontró el div con la clase 'ttypography' o estaba vacío."
    exit 1
fi

# Guardar el contenido en un archivo
echo "$divContent" > output.txt

echo "El contenido del div con clase 'ttypography', sin etiquetas HTML, se ha guardado en output.txt."

