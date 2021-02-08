#include <iostream>
using namespace std;

int main()
{
	int matriz[5] = { 66,75,2,43,99 };

	cout << matriz[2] << endl;
}



//Array with loop

#include <iostream>

using namespace std;

int main()
{
	int matriz[9];
	cout << "Element  - Value" << endl;
	for (int i = 0; i <= 8; x++) {
		matriz[i] = 99

			cout << x << " -------  " << matriz[i] << endl;

	}

}


//Utilizar los Arrays para calcular.

#include <iostream>
using namespace std;
int main()
{
	int matriz[5] = { 20,54,76,832,546 };
	int suma = 0;
//Para sumar toda la matriz por pasos usamos un for
	for (int i = 0; i < 5; i++) {
	suma+=matriz[i];
		cout << suma<< endl;
	}

}

#include <iostream>
using namespace std;
void printArray(int theArray[], int sizeOfArray) {

int main()
{
	int bucky[3] = { 20,54,675 };
	int jessica[6] = { 54,24,7,8,8,99 };

	printArray(bucky, 3);

}

void printArray(int theArray[],int sizeOfArray){

for (int i = 0; i < sizeOfArray; i++) {

	cout << theArray[i] << endl;

}