#include<iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin>>n>>k;

    int arr[n];
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }

    int sum =0;

    for (int i=0; i<k; i++) {
        sum+=arr[i];
    }

    int MAX =sum;

    for (int i=k;i<n;i++) {
        sum+=arr[i]-arr[i-k];
        if (sum>MAX) MAX=sum;
    }
    cout<<MAX;
    
    return 0;
}