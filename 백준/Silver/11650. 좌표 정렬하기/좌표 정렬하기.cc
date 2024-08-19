#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int n;

    cin>>n;

    pair<int,int>arr[100000];

    for(int i=0;i<n;i++){
        cin>>arr[i].first>>arr[i].second;
    }

    sort(arr,arr+n);

    for(int i=0;i<n;i++){
        cout<<arr[i].first<<' '<<arr[i].second<<"\n";
    }

    return 0;
}