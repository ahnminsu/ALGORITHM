#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string a,b,c;

    cin>>a>>b>>c;

    int res;

    if(a[0]!='F' && a[0]!='B'){
        res = stoi(a)+3;
    }
    else if (b[0]!='F' && b[0]!='B'){
        res = stoi(b)+2;
    }
    else if (c[0]!='F' && c[0]!='B'){
        res = stoi(c)+1;
    }

    if(res %3==0 && res %5==0){
        cout<<"FizzBuzz";
    }
    else if (res % 3==0){
        cout<<"Fizz";
    }
    else if (res % 5==0){
        cout<<"Buzz";
    }
    else{
        cout<<res;
    }



    return 0;
}