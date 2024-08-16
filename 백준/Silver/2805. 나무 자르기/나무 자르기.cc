#include <iostream>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n,m;
    long long max =0;
    long long arr[1000000];

    cin>>n>>m;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>max){
            max=arr[i];
        }
    }

    long long left = 1;
    long long right = max;
    long long mid;
    long long res = 0;

    while(left<=right){
        mid = (left+right) / 2;

        long long sum =0;

        for(int i=0;i<n;i++){
            if(arr[i]>mid) {
                sum += arr[i] - mid;
            }
        }

        if(sum>=m){
            if(res<mid) res = mid;
            left = mid + 1 ;
        }
        else{
            right = mid -1 ;
        }
    }

    cout<<res;

    return 0;
}