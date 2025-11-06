#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int LTS(vector<int>&arr) {
    vector<int>lis;
    for (int i:arr) {
        auto it = lower_bound(lis.begin(),lis.end(),i);
        if (it == lis.end()) lis.push_back(i);
        else *it = i;
    }
    return (int)lis.size();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    vector<int>arr(n);

    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }

    cout<<LTS(arr);

    return 0;
}