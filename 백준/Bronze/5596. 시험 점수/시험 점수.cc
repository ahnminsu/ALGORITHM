#include <iostream>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int sum1=0,sum2 =0;


    for (int j =0;j<4;j++) {
            cin>>n;
            sum1+=n;
        }

    for (int j =0;j<4;j++) {
        cin>>n;
        sum2+=n;
    }

    if (sum1>sum2) {
        cout<<sum1;
    }
    else if (sum1==sum2) {
        cout<<sum1;
    }
    else {
        cout<<sum2;
    }


    return 0;
}