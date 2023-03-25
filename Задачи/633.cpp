#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    string a, b, c, d;

    getline(cin, a);
    cin >> b;
    cin >> c;
    cin >> d;

    string mass[3]{ b, c, d };

    sort(mass, mass + 3);

    cout << a << ':' << ' ';
    for (int i = 0; i < 3; i++) {
        cout << mass[i];
        if (i != 2)
            cout << ", ";
    }
}