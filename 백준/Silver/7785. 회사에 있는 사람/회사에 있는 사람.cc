#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string name,str;
    map<string, bool>m;

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>name>>str;
        if(str=="enter"){
            m.insert({name, true});
        }
        else{
            m.erase(name);
        }
    }

    for(auto it = m.rbegin(); it != m.rend(); it++){
        cout<<it->first<<"\n";
    }

    return 0;
}