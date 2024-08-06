#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,num;
    string str;
    int cnt =1;
    stack<int>s;

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>num;

        while(cnt<=num){
            s.push(cnt);
            cnt++;
            str+='+';
        }
        if(s.top()==num){
            s.pop();
            str+="-";
        }
        else{
            cout<<"NO";
            return 0;
        }

    }

    for(int i=0;i<str.length();i++){
        cout<<str[i]<<'\n';
    }

    return 0;
}
