#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string str;
    stack<int>s;

    cin>>n;

    for(int i=0; i<n;i++){
        cin>>str;

        int num;

        if(str=="push"){
            cin>>num;
            s.push(num);
        }
        else if(str=="pop"){
            if(s.empty()){
                cout<<"-1"<<"\n";
            }
            else{
                cout<<s.top()<<"\n";
                s.pop();
            }
        }
        else if(str=="size"){
            cout<<s.size()<<"\n";
        }
        else if(str=="empty"){
            cout<<s.empty()<<"\n";
        }
        else{
            if(s.empty()){
                cout<<"-1"<<"\n";
            }
            else{
                cout<<s.top()<<"\n";
            }
        }
    }

    return 0;
}
