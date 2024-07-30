#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    string s;
    cin>> s;

    string reversed_s = s;

    reverse(reversed_s.begin(),reversed_s.end());

    if(s==reversed_s) cout<<"1";
    else cout<<"0";

    return 0;
}