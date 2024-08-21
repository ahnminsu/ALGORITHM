#include <iostream>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N,T,P;
    int sum =0;
    int arr[6];

    cin>>N;

    for(int i=0;i<6;i++){
        cin>>arr[i];
    }

    cin>>T>>P;

    for(int i=0;i<6;i++){
        sum+=arr[i]/T +(arr[i]%T>0);
    }

    cout<<sum<<"\n";
    cout<<N/P<<" "<<N%P;

    return 0;
}