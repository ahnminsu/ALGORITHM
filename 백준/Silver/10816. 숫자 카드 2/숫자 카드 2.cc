#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,num;
    map<int, int>map;

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>num;
        map[num]++;
    }

    cin>>m;

    for(int i=0;i<m;i++){
        cin>>num;
        cout<<map[num]<<" ";
    }

    return 0;
}