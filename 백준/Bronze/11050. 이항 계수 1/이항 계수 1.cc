#include <iostream>
using namespace std;

int factorial(int a){
    int res = 1;
    for(int i=a;i>0;i--){
        res*=i;
    }
    return res;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int n,k;

    cin>>n>>k;

    int res = factorial(n) / (factorial(k) * factorial(n-k));

    cout<<res;

    return 0;
}