#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int cnt=0;

    while(cin>>n){
        if(n>0) cnt++;
    }

    cout<<cnt;

    return 0;
}