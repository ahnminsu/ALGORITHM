#include <iostream>
#include <stack>
#include <string>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;

    while(true){
        getline(cin,str);
        if(str == ".") break;

        stack<char>st;
        bool flag = false;

        for(int i=0;i<str.length();i++) {
            if (str[i] == '(' || str[i] == '[') {
                st.push(str[i]);
            }
            else if(str[i] == ')'){
                if(!st.empty() && st.top() == '('){
                    st.pop();
                }
                else{
                    flag = true;
                    break;
                }
            }
            else if(str[i] == ']'){
                if(!st.empty() && st.top() == '['){
                    st.pop();
                }
                else{
                    flag = true;
                    break;
                }
            }
        }

        if(flag==0 && st.empty()){
            cout<<"yes"<<"\n";
        }
        else{
            cout<<"no"<<"\n";
        }
    }

    return 0;
}