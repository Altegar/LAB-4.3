// LAB-4.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// LAB_04_3.cpp
// Сушинський Ігор
// Лабораторна робота № 4.3
// Табуляція функції, заданої формулою: функція з параметрами
// Варіант 18

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
	double x, xp, xk, dx, a, b, c, F;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "F" << " |";
	cout << "---------------------------" << endl;

	x = xp;
	while (x <= xk)
	{
		if (x < 0 && b != 0)
			F = a * pow(x, 2) - b * pow(x, 2);
		else
			if (x > 0 && b == 0)
				F = (x - a) / (x - c);
			else
				F = (x + 5) / (c * (x - 10));

		cout << "|" << setw(7) << setprecision(2) << F
			 << "|" << endl;

		x += dx;
	}
	cout << "---------------------------" << endl;

	return 0;
}