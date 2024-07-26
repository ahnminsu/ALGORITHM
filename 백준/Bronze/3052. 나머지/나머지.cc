#include <iostream>
using namespace std;

int main() {
  int a;
  int i;
  int count=0;
  int arr[42]={0,};
  
  for(i=0;i<10;i++){
    cin>>a;
    arr[a%42]++;
  }

  for(i=0;i<42;i++){
    if(arr[i]>0){
      count++;
    }
  }

  cout<<count;

  return 0;
}
