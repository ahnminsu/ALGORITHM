#include <iostream>
using namespace std;

int main(){
  
  int n=0;
  cin>>n;

  for(int i=0;i<n;i++) {
    for(int j=n-i-1;j>0;j--){
      cout<<" ";
    }
    for(int j=0;j<=2*i;j++){
      cout<<"*";
    }

    cout<<endl; 
  }

  for(int i=0;i<n-1;i++){
    for(int j=0;j<i+1;j++){
      cout<<" ";  
    }
    for(int j=2*(n-i-1)-1;j>0;j--){
      cout<<"*";  
    }

    cout<<endl;
  }
  
  return 0;
}