#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    string str;
    map<string,int>Toindex;
    map<int, string>Tostring;

    cin>>n>>m;

    for(int i=0;i<n;i++){
        cin>>str;
        Toindex.insert({str,i+1});
        Tostring.insert({i+1,str});
    }

    for(int i=0;i<m;i++){
        cin>>str;
        if(str[0]>=65&&str[0]<=90){
            cout<<Toindex[str]<<"\n";
        }
        else{
            int index = stoi(str);
            cout<<Tostring[index]<<"\n";
        }
    }

    return 0;
}