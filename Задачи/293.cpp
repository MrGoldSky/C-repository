#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int n = 0;
	cin >> n;

	double firms[100]{};
	double taxes[100]{};

	for (int i = 0; i < n; i++) {
		cin >> firms[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> taxes[i];
	}

	double max = -1;
	int firm = -1;
	double a;


	for (int i = 0; i < 100; i++) {
		a = firms[i] / 100 * taxes[i];
		if (a > max) {
			max = a;
			firm = i;
		}
	}
	cout << firm + 1;
}
