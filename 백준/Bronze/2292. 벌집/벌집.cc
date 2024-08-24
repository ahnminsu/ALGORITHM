#include <iostream>
#include <queue>
using namespace std;


int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int sum =1;
    int layer = 1;

    cin>>n;
    
    while(n>sum){
        sum+= 6 * layer;
        layer++;
    }
    
    cout<<layer;


    return 0;
}