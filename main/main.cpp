#include <iostream>
#include <cstdio>

int main()
{
	setlocale(LC_ALL, "rus");
	int a, b, c;
	std::cout << "Введите a b c: ";
	std::cin >> a >> b >> c;

	double p = (a + b + c) / 2;

	if (((a + b) > c) and ((a + c) > b) and ((b + c) > a)) {
		std::cout << "Площадь равна = " << sqrt(p * (p - a) * (p - b) * (p - c));
	}
	else {
		std::cout << "Треугольника не существует";
	}
	std::cin >> a;
}

