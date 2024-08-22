#include <iostream>
using namespace std;


int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b,max;
    cin >> a >> b;


    for (int i = 1; i <= (a < b ? a : b); i++) {
        if (a % i == 0 && b % i == 0) {
            max = i;
        }
    }

    int min = (a * b) / max;

    cout << max << "\n";
    cout << min << "\n";

    return 0;
}