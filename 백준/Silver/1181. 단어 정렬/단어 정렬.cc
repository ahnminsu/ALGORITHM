#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int cmp(string a,string b){
    if(a.length()==b.length()) return a<b;
    else return a.length()<b.length();
}

string str[20000];

int main() {
    
    int num;

    cin>>num;

    for(int i=0;i<num;i++){
        cin>>str[i];
    }

    sort(str,str+num,cmp);

    for(int i=0;i<num;i++){
        if(str[i]==str[i+1]) continue;
        cout<<str[i]<<endl;
    }


    return 0;

}