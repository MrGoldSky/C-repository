#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	double n, m;

	cin >> n;
	cin >> m;
	
	// Степени двойки содержат самую маленькую траекторию пути до 1 
	// n = 2^N -1 => n+1 степень 2
	// не существует при m == 0

	if (m == 0) {
		cout << "NO";
	}
	else {
		cout << n + 1;
	}
}
