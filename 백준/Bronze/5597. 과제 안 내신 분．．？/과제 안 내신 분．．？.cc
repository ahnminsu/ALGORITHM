#include <iostream>
using namespace std;

int main() {
  int a;
  int i;
  int arr[31];
  
  for(i=0;i<=30;i++){
    arr[i]=0;
  }
  
  for(i=0;i<28;i++){
    cin>>a;
    arr[a]=1;
  }

  for(i=1;i<=30;i++){
    if(!arr[i]){
      cout<<i<<endl;
    }
  }
  return 0;
}
