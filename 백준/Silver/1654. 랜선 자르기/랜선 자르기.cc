#include <iostream>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int k,n;
    int max=0;
    int arr[10000];

    cin>>k>>n;

    for(int i=0;i<k;i++){
        cin>>arr[i];
        if(arr[i]>max){
            max=arr[i];
        }
    }

    long long left = 1;
    long long right = max;
    long long mid;
    long long res;

    while(left<=right){

        mid = (left+right) / 2;
        int sum = 0;

        for(int i=0;i<k;i++){
            sum+=arr[i]/mid;
        }

        if(sum >= n){
            res = mid;
            left = mid +1;
        }
        else{
            right = mid-1;
        }

    }
    cout<<res<<"\n";

    return 0;
}