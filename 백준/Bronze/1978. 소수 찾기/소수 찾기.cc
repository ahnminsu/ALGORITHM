#include <iostream>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,num;
    int cnt=0, res =0;


    cin>>n;

    for(int i=0;i<n;i++){
        cin>>num;
        for(int j=1;j<=num;j++){
            if(num%j==0){
                cnt++;
            }
        }
        if(cnt ==2){
            res++;
        }
        cnt=0;
    }

    cout<<res;

    return 0;
}