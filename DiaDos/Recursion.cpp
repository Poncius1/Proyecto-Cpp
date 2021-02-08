#include <iostream>
using namespace std;
//Es la idea de que una funcion puede llamarse a si misma.
int factorialFinder(int x) {
	if (x == ) {
		return 1;
	}
	else {
		return x * factorialFinder(x - 1);

	}
}
int main()
{
	cout << factorialFinder(5) << endl;

}