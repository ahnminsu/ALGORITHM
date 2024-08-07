#include <iostream>
#include <map>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;

    map<int,bool>map;

    cin>>n;

    int a;

    for(int i=0;i<n;i++){
       cin>>a;
       map.insert({a,true});
    }

    cin>> m;
    for(int i=0;i<m;i++){
        cin>>a;
        if(map[a]) cout<<"1"<<" ";
        else cout<<"0"<<" ";
    }

    return 0;
}
