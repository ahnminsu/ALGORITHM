#include <iostream>
using namespace std;

int main() {
  int num;
  int a,b;
  int i;

  cin>>num;
  
  for(i=0;i<num;i++){
    cin>>a>>b;
    cout<<"Case #"<<i+1<<": "<<a<<" + "<<b<<" = "<<a+b<<endl;
  }
}