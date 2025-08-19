#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b;
    int cnt =0;

    cin>>a>>b;

    int arr[a];

    for (int i=1;i<=a;i++) {
        if (a%i==0) {
            arr[cnt++] = i;
        }
    }

    if (cnt >= b) {
        cout<<arr[b-1];
    }
    else {
        cout<<"0";
    }

    return 0;
}