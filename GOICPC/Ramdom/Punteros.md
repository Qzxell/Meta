Mostrar la direccion de memoria de una variable
```c++
int main(){
	int num;
	num = 30;
	cout << "direccion de num " << &num ;
}
```

Guardar la direccion de memoria de una variable, e imprimir lo que encuentre en la direccion de memoria dir.

```c++
int main(){
	int num,*dir;
	num = 30;
	dir = &num;
	cout << "La direccion de memoria " << *dir;
}
```