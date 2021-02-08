//El trabajo de una funcion es hacer algo que dentro de ella podamos darle instrucciones a nuestro programa.


#include <iostream>
using namespace std;

void printSometing();

//si queremos colocar otra funcion utilizamos el "void" y debemos declarar la variables arriba para no tener problemas.
int main()
{
 
printSomething()

   return 0;
}

void printSomething(){
    cout << "This is a Test About void"<< endl;
    }



// Crear funciones con parametros.

#include <iostream>
using namespace std;

int main()
{
//Uso del ciclo Do - While
int x = 1;

//Sintax Do while
do{
    cout<<x<<endl;
    x++;
    }while(x<10);

}
    //Este se utiliza pra dar una instruccion y que se ejecute cuando cumple la condicion.
    //Normalmente se ultiliza poco pero sirve para asegurar que en algun momento se ejecutara tu condicion.


        

//Ejercicio "Switch "

# include "iostream"

using namespace std;

int main()
{
    cout << "Ingrese la Opción a ejecutar: ";
    int opcion = 0;
    cin >> opcion;

    switch(opcion)
    {
        case 1: cout << "Usted ha seleccionado la opción 1";
        break;
        case 2: cout << "Usted ha seleccionado la opción 2";
        break;
        case 3: cout << "Usted ha seleccionado la opción 3";
        break;
        default: cout << "Usted ha ingresado una opción incorrecta";
    }
   
    return 0;
}
