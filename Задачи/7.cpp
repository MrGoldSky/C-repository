#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string a[3]{};

    int max_l = 0;
    string max;

    for (int i = 0; i < 3; i++) {
        cin >> a[i];
        if (a[i].length() > max_l) {
            max_l = a[i].length();
            max = a[i];
        }
        else if (a[i].length() == max_l)
            for (int j = 0; j < max_l; j++) {
                if (a[i][j] > max[j]) {
                    max = a[i];
                    max_l = a[i].length();
                }
            }
    }

    cout << max;
}