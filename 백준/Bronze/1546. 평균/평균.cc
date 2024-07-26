#include<iostream>
using namespace std;

int main() {

    int n;
    double a;
    double sum=0;
    int max=-1;

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a;
        sum+=a;
        if(max<a) max=a;
    }
   
    cout<<(sum/max*100)/n;


    return 0;

}