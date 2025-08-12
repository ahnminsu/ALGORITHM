#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int arr[5];

    cin>>n;

    for (int i=0;i<n;i++) {

        for (int j=0;j<5;j++) {
            cin>>arr[j];
        }

        sort(arr,arr+5);

        if (arr[3]-arr[1] >=4) {
            cout<<"KIN"<<"\n";
        }
        else{
            cout<<arr[1]+arr[2]+arr[3]<<"\n";
        }

    }
    return 0;
}