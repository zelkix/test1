#include "pch.h"
#include <iostream>
#include <cmath>
#include <complex>

using namespace std;

int main()
{
	float a, b, suma, roznica, iloczyn, iloraz;

	cout << "Podaj a i b: " << endl;
	cin >> a;
	cin >> b;

	suma = a + b;
	cout << "Suma: " << suma << endl;

	roznica = a - b;
	cout << "Roznica: " << roznica << endl;

	iloczyn = a * b;
	cout << "Iloczyn: " << iloczyn << endl;

	iloraz = a / b;
	if (b == 0) {
		cout << "Nie mozna dzielic przez 0.";
	}
	else {
		cout << "Iloraz: " << iloraz << endl;
	}
}