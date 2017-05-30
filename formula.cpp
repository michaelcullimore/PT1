//Michael Cullimore
//CS1410 - Brinkerhoff
//PT1

#include <iostream>
#include <cmath>
using namespace std;

int main () {
	double F, P, i, g, n;

	cout << "-/|\\- PT1 -/|\\-\n";
	cout<<"F = P * ((1 - pow (1 + g, n) * pow (1 + i, n)) / (i - g))\n\n";

	cout << "Enter a number for the variable P: "; cin >> P; cout << endl;
	cout << "Enter a number for the variable i: "; cin >> i; cout << endl;
	cout << "Enter a number for the variable g: "; cin >> g; cout << endl;
	cout << "Enter a number for the variable n: "; cin >> n; cout << endl;

	F = P * ((1 - pow (1 + g, n) * pow (1 + i, n)) / (i - g));
	cout << F << " = " << P << " * ((1 - pow (1 + " << g << ", " << n << ") * pow (1 + " << i << ", " << n << ")) / (" << i << " - " << g << "))\n\n";

	cout << "P = " << P << endl;
	cout << "i = " << i << endl;
	cout << "g = " << g << endl;
	cout << "n = " << n << endl ;
	cout << "F = " << F << endl << endl;

	//system ("pause");
	return 0;
}