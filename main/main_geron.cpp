#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a, b, c;
	cout << "Введите a b c: ";
	cin >> a >> b >> c;

	if (((a + b) < c) or ((a + c) < b) or ((b + c) < a)) {
		cout << "Треугольника не существует";
	}
	else {
		double p = (a + b + c) / 2;
		cout << "Площадь равна = " << sqrt(p * (p - a) * (p - b) * (p - c));
	}
	cin >> a;
}

