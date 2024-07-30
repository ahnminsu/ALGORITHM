#include<iostream>
#include<string>
using namespace std;

int main() {
    int n,a;
    int max=-1000001;
    int min=1000001;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a;
        if(max<a) max=a;
        if(min>a) min=a;
    }

    cout<<min<<" "<<max;

    return 0;
}