// DiaDosC++.cpp : Dia dos en el 100daysOfCode
//Generador de numeros random.
#include <iostream>
#include <cstdlib>
#include <ctime>
//Libreria para acceder a la hora de la computadora
using namespace std;

int main()
{
	//Realmente los numeros no son aleatorios solo que su accion cada que avanza el tiempo.
	srand(time(0));
	//"srand es lo que nos ayuda a que cambien en base a la condicion del tiempo.
		for (int i = 1; i < 25; i++) {

			cout << 1 + (rand() % 6) << endl;


	}
	return 0; 
   
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

