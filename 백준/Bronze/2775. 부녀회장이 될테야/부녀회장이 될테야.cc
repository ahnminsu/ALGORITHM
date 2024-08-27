#include <iostream>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    int k,n;
    int arr[15][15];

    cin>>T;

    while(T--){

        cin>>k>>n;

        for(int i=0;i<15;i++){
            arr[i][1] = 1;
            arr[0][i] = i;
        }

        for(int i =1;i<15;i++){
            for(int j=2;j<15;j++){
                arr[i][j] = arr[i][j-1] + arr[i-1][j];
            }
        }

        cout<<arr[k][n]<<"\n";
    }

    return 0;
}