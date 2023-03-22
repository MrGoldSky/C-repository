#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int numbers[]{ 3, -12, 5, 4, 10, 24, -1, -24, 0, 99 };

	int size = 0;
	size = end(numbers) - begin(numbers);

	sort(numbers, numbers + size);

	for (int i = 0; i < size; i++) {
		cout << numbers[i] << ' ';
	}
}
