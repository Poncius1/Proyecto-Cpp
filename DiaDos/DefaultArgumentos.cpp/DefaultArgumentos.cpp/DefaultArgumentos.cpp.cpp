// DefaultArgumentos.cpp

//Calcular volumen 
#include <iostream>
using namespace std;
int volume(int b = 1, int w = 1, int h = 1);
// Los "=1' son utilizados como el numero que se usara si el usuario no ingresara algun numero en este caso
//Lo multiplicara por 1.
int main() 
{
	cout << volume(4, 2, 5);
}

int volume(int b, int w, int h) {
	return b*w*h;
}

