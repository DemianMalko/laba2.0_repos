// Lab_02.cpp
// < Малько Дем'ян >
// Лабораторна робота номер 2
// Лінійні програми
// Варіант 9
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double b; // вхідний параметр
	double z1; // Результат обчислення 1-го виразу
	double z2; // Результат обчислення 2-го виразу
	double a; // вхідний параметр
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;

	z1 = (cos(a) - cos(b)) * (cos(a) - cos(b)) - (sin(a) - sin(b)) * (sin(a) - sin(b));
	z2 = 4 * (sin((a - b) / 2) * sin((a - b) / 2)) * cos(a + b);

	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}

