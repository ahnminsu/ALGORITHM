#include <iostream>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int L;
    long long hash = 0;
    long long R = 1;
    int r = 31;
    int M = 1234567891;
    char arr[51];

    cin>>L;

    for(int i=0;i<L;i++){
        cin>>arr[i];
    }

    for(int i=0;i<L;i++){
        hash += ((arr[i] -'a' +1) * R) % M;
        R *= r;
        hash %= M;
        R %= M;
    }

    cout<<hash;

    return 0;
}