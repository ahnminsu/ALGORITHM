#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string str;

    cin>>n;

    for (int i=0;i<n;i++) {
        cin>>str;
        cout<<str<<"DORO"<<" ";
    }

    return 0;
}