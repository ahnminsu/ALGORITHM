#include <iostream>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;

    cin>>n>>m;

    if ((n == 0 && m == 5) || (n == 2 && m == 0) || (n == 5 && m == 2) ||
    ((n != 0 && n != 2 && n != 5) && (m == 0 || m == 2 || m == 5))) {
        cout << "<";
    }
    else if ((n == 0 && m == 2) || (n == 2 && m == 5) || (n == 5 && m == 0) ||
        ((n == 0 || n == 2 || n == 5) && (m != 0 && m != 2 && m != 5)) ) {
        cout << ">";
        }
    else {
        cout << "=";
        }

    return 0;
}