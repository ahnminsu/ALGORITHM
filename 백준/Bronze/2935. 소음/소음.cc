#include<iostream>
#include<string>
using namespace std;

int main(){

    string a,c;
    char b;

    cin>>a>>b>>c;

    int asize = a.length();
    int csize = c.length();

    if(b=='*'){
        int zerosize = asize+csize-2;
        cout<<"1";
        for(int i=0;i<zerosize;i++) cout<<"0";
    }

    else{
        if(asize==csize){
            cout<<"2";
            for(int i=0;i<asize-1;i++) cout<<"0";
        }
        else if(asize!=csize){
            int m = max(asize,csize);
            int n = min(asize,csize);
            for(int i=m; i>0; i--){
                if(i==m||i==n) cout<<"1";
                else cout<<"0";
            }
        }
    }

    return 0;
}