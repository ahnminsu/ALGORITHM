#include <iostream>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m=100;
    int sum =0;

    for (int i=0;i<7;i++) {
        cin>>n;

        if (n % 2 !=0) {
            sum += n;
            m = min(n,m);
        }
    }

    if (sum ==0) {
        cout<<"-1";
    }
    else {
        cout<<sum<<"\n";
        cout<<m;
    }

    return 0;
}