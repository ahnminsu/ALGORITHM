#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int A,B,V;
    int res;

    cin>>A>>B>>V;

    res = ceil((double)(V-A)/(A-B))+1;

    cout<<res;


}