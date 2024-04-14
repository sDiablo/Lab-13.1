// 13.1.cpp
// < Кав’як Назарій >
// Лабораторна робота № 13.1
// Простори імен
// Варіант 15

#include <iostream>
#include <math.h>
#include <iomanip>
#include <cassert>

#include "dod.h"
#include "sum.h"
#include "var.h"

using namespace std;

using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

int main()
{

	cout << "x_p = "; cin >> x_p;
	cout << "x_k = "; cin >> x_k;
	cout << "dx = "; cin >> dx;
	cout << "e = "; cin >> e;
	cout << endl;
	cout << fixed;
	cout << fixed;
	cout << "-----------------------------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(10) << "arth(x)" << " |"
		<< setw(10) << "S" << " |"
		<< setw(5) << "n" << " |"
		<< endl;
	cout << "-----------------------------------------" << endl;


	x = x_p;

	while (x <= x_k && x >= -1 && x < 1) {

		sum();

		cout << "|" << setw(7) << setprecision(2) << x << " |"
			<< setw(10) << setprecision(4) << sin(x) / x << " |"
			<< setw(10) << setprecision(4) << s << " |"
			<< setw(5) << n << " |"
			<< endl;
		x += dx;
	}
	cout << "-----------------------------------------" << endl;

	cin.get();
	return 0;
}

