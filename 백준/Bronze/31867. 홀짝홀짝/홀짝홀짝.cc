#include <iostream>
using namespace std;

int main() {

    string str;

    int n;
    int odd = 0;
    int even =0;

    cin >> n;

    cin >> str;

    for (int i=0; i<n; i++) {

        int a = str[i] - '0';

        if (a% 2 == 0) {
            even ++;
        }
        else {
            odd ++;
        }
    }

    if (odd<even) { //짝짝수
        cout<<"0";
    }
    else if (odd>even) { //홀홀수
        cout<<"1";
    }
    else {
        cout<<"-1";
    }


    return 0;
}