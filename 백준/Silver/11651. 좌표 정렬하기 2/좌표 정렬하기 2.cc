#include <iostream>
#include <algorithm>
using namespace std;

bool compare(pair<int,int>a,pair<int,int>b){
    if(a.second==b.second) return a.first<b.first;
    else return a.second<b.second;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    pair<int,int>arr[100000];

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i].first>>arr[i].second;
    }

    stable_sort(arr,arr+n,compare);

    for(int i=0;i<n;i++){
        cout<<arr[i].first<<' '<<arr[i].second<<"\n";
    }

    return 0;
}