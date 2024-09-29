#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    int level[n];
    
    if(n==0){
        cout<<0;
        return 0;
    }

    for(int i=0;i<n;i++){
        cin>>level[i];
    }

    sort(level,level+n);

    int cnt = round(n * 0.15);
    int sum =0;

    for(int i=cnt;i<n-cnt;i++){
        sum +=  level[i];
    }

    int res = round((double)sum / (n-cnt*2));

    cout<<res;

    return 0;
}