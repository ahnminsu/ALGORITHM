#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


int main() {

    string str;

    while(str!="0"){
        cin>>str;
        string bf = str;
        reverse(str.begin(),str.end());
        if(str=="0")
            break;
        else if(bf==str) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }

    return 0;
}