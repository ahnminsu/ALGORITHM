#include <iostream>
#include <string>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;

    cin>>str;

    for(int i=0;i<str.length();i++){
        str[i] -= 32;
        cout<<str[i];
    }

    return 0;
}