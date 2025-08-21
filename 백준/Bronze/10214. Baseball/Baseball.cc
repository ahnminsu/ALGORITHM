#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;

    cin>>t;

    for (int i = 0; i < t; i++){
        int sum1 =0, sum2 =0;
        for(int j=0; j<9; j++){
            int a, b;
            cin>>a>>b;
            sum1+=a;
            sum2+=b;
        }
        if (sum1>sum2) {
            cout<<"Yonsei"<<"\n";
        }
        else if (sum1<sum2) {
            cout<<"Korea"<<"\n";
        }
        else {
            cout<<"Draw"<<"\n";
        }
    }

    return 0;
}