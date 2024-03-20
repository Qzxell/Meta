Contiene sus atributos y sus metodos : 

```c++
class Person{
	private:
		int age;
		string name;	
	public:
		// construct
		Person(int, string);
		void learn();
		void run();
};
```
Los unicos que pueden modificar dentro de la clase esta en la parte **public**
### Constructor 
Inicializar atributos
```c++
Person:Person(int x, string y){
	age = x;
	name = y;
}

void Person:learn(){
	cout << "learning";
}
void Person:run(){
	cout << "running";
}
```