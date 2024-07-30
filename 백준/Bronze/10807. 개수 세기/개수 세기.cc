#include <iostream>
using namespace std;

int main() {
  
  int num,num2;
  int count=0;
  int j;
  
  cin>>num;

  int arr[num];
  
  for(j=0;j<num;j++){
    cin>>arr[j];    
  }

  cin>>num2;

  for(j=0;j<num;j++){
    if(num2==arr[j]){
      count++;
    }
  }

  cout<<count;
  
  return 0;
}