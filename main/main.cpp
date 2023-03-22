#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int numbers[]{ 3, -12, 5, 4, 10, 24, -1, -24, 0, 99 };

	string strings[]{"а", "в", "б", "аа", "бб", "вв"};

	int size_numbers = 0;
	int size_strings = 0;

	size_numbers = end(numbers) - begin(numbers);
	size_strings = end(strings) - begin(strings);

	sort(numbers, numbers + size_numbers);
	sort(strings, strings + size_strings);

	for (int i = 0; i < size_numbers; i++) {
		cout << numbers[i] << ' ';
	}
	cout << '\n';
	for (int i = 0; i < size_strings; i++) {
		cout << strings[i] << ' ';
	}
}
