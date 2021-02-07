#include <iostream>
using namespace std;

int main()
{
//Hacemos un programa para demostrar la logica.

int edad = 0;
int money = 0;
cout<< "Ingresa tu edad:";
cin >>edad;

cout<<"Ingresa la cantidad de dinero que tienes ahora  dinero:";
cin>>money;

if(edad>21){
    if(money>500){
        cout<< "Adelante, cuentas con los requisitos.";

    }
}


   
    return 0;

}

//Forma de resumir el If y evitar escribirlo tantas veces.


int main()
{

int edad = 0;
int money = 0;
cout<< "Ingresa tu edad:";
cin >>edad;

cout<<"Ingresa la cantidad de dinero que tienes ahora  dinero:";
cin>>money;
//Colocamos el simbolo && para colocar varios if en un solo parentesis.
if(edad>21 && money>500){
//Se colocan || cuando solo queremos que una de las opciones sea verdadera.

        cout<< "Adelante, cuentas con los requisitos.";

    }
}


   
    return 0;

}


