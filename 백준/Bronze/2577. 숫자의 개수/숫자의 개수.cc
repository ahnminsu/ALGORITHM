#include<iostream>
#include<string>
using namespace std;

int main() {
    int a,b,c;
    int arr[10]={0,};

    cin>>a>>b>>c;

    int result = a*b*c;

    string str = to_string(result);

    for(char ch:str){
        arr[ch-'0']++;
    }

    for(int i:arr){
        cout<<i<<endl;
    }

    return 0;

}