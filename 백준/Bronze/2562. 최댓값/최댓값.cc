#include<iostream>
using namespace std;

int main() {
    int a=0;
    int max=0,max_index=0;

    for(int i=1;i<=9;i++){
        cin>>a;
        if(max<a){
            max=a;
            max_index=i;
        }
    }

    cout<<max<<endl<<max_index;

    return 0;
}