#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float a1, a2, b1, b2, c1, c2, w, wX, wY, x, y;
	cout << "Podaj wspolczynniki a, b i c pierwszego rownania w postaci ax + by = c: " << endl;
	cin >> a1;
	cin >> b1;
	cin >> c1;
	cout << "Podaj wspolczynniki a, b i c drugiego rownania w postaci ax + by = c: " << endl;
	cin >> a2;
	cin >> b2;
	cin >> c2;
	w = (a1 * b2) - (a2 * b1);
	wX = (c1 * b2) - (c2 * b1);
	wY = (a1 * c2) - (a2 * c1);

	x = wX / w;
	y = wY / w;

	if (w != 0)
	{
		cout << "x = " << x << endl;
		cout << "y = " << y << endl;
	}
	else if (w == 0 && wX == 0 && wY == 0)
	{
		cout << "Uklad ma nieskonczenie wiele rozwiazan." << endl;
	}
	else if (w == 0 && (wX != 0 || wY != 0))
	{
		cout << "Uklad rownan jest sprzeczny - brak rozwiazan." << endl;
	}
}