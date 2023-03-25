#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int n, m;
	cin >> n >> m;

	int prices[1000]{ 0 % 1000 } ;
	int price;

	for (int i = 0; i < n; i++) {
		cin >> price;
		if (price > 0) {
			prices[i] = price;
		}
	}

	sort(prices, prices + 1000);

	int summ = 0;
	for (int i = 1000; i > 0; i--) {
		if (1000 - i < m) {
			summ += prices[i - 1];
		}
	}
	cout << summ;
}


