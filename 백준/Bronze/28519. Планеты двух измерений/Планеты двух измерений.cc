#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long a,b;

    cin>>a>>b;

    if (a>b) {
        cout<<b*2+1<<"\n";
    }
    else if (a<b) {
        cout<<a*2+1<<"\n";
    }
    else {
        cout<<a*2;
    }

    return 0;
}