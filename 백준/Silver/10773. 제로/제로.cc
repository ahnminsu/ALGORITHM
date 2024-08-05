#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,num;
    int sum=0;

    cin>>n;

    stack<int>s;

    for(int i=0;i<n;i++){
        cin>>num;
        if(num!=0){
            s.push(num);
        }
        else{
            s.pop();
        }
    }

    while(!s.empty()){
        sum+=s.top();
        s.pop();
    }

    cout<<sum;

    return 0;
}
