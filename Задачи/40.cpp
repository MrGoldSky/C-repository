#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int n;
	string a = "2";
	cin >> n;


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < sizeof(a); j++) {
			string c = a[j];
			int b = stoi(c) * 2;

		}
	}
	cout << a;


}
