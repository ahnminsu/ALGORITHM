#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int cnt=0;

    cin>>n;
    
    while(n--){
        stack<char>s;
        string str;
        cin>>str;
        for(int i=0;i<str.length();i++){
            if (s.empty()) {
                s.push(str[i]);
            } else {
                if (s.top() == str[i]) {
                    s.pop();
                } else {
                    s.push(str[i]);
                }
            }
        }
        if(s.empty()) cnt++;
    }
    cout<<cnt;

    return 0;
}
