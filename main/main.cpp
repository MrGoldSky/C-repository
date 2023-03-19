#include <iostream>
#include <cstdio>

int main()
{
	setlocale(LC_ALL, "rus");
	int a, b, c;
	std::cout << "Введите a: ";
	std::cin >> a;
	std::cout << "Введите b: ";
	std::cin >> b;
	std::cout << "Введите c: ";
	std::cin >> c;

	double p = (a + b + c) / 2;

	if ((a + b) > c) {
		if ((a + c) > b) {
			if ((c + b) > a) {
				std::cout << "Площадь равна = " << sqrt(p * (p - a) * (p - b) * (p - c));
			} else {
				std::cout << "Треугольника не существует";
			}
		} else {
			std::cout << "Треугольника не существует";
		}
	} else {
		std::cout << "Треугольника не существует";
	}
	std::cin >> a;
}

