#include <iostream>
#include <string>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin>>str;

    if(str=="SONGDO"){
        cout<<"HIGHSCHOOL";
    }
    else if(str=="CODE"){
        cout<<"MASTER";
    }
    else if(str=="2023"){
        cout<<"0611";
    }
    else if(str=="ALGORITHM"){
        cout<<"CONTEST";
    }

    return 0;
}