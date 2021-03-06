#include "pch.h"
#include <iostream>
#include <cmath>
#include <complex>

using namespace std;

int main() {
	double a, b, c, x0, x1, x2, delta;
	complex <double> x1Im, x2Im;
	cout << "a, b, c: " << endl;
	cin >> a >> b >> c;

	delta = (b * b) - 4 * a * c;


	if (a == 0) cout << "a nie moze byc rowne 0" << endl;

	else if (delta == 0) {
		x0 = (-b) / (2 * a);
		cout << "X0=" << x0 << endl;
	}
	else if (delta > 0) {
		x1 = (-b - (sqrt(delta))) / (2 * a);
		cout << "X1=" << x1 << endl;
		x2 = (-b + (sqrt(delta))) / (2 * a);
		cout << "X2=" << x2 << endl;
	}
	else {
		complex <double> d = delta;
		d = sqrt(d);

		x1Im = (-b - d) / (2 * a);
		x2Im = (-b + d) / (2 * a);
		cout << x1Im << "i" << endl;
		cout << x2Im << "i" << endl;

	}
}
