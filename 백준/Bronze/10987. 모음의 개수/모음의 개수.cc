#include <iostream>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int cnt =0;
    string str;
    string m = "aeiou";


    cin>>str;

    for (int i=0;i<str.length();i++) {
        for (int j =0;j<m.length();j++) {
            if (str[i] == m[j]) {
                cnt+=1;
            }
        }
    }

    cout<<cnt;

    return 0;
}