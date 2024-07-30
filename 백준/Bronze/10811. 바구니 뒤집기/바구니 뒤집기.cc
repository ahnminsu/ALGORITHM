#include <iostream>
using namespace std;

int main() {
  int n,m;
  int a,b;
  int i,j;
  int temp;
  
  cin>>n>>m;

  int arr[n+1];

  for(i=1;i<n+1;i++){
    arr[i]=i;
  }

  for(i=0;i<m;i++){
    cin>>a>>b;
    for(j=0;j<=(b-a)/2;j++){
      temp=arr[a+j];
      arr[a+j]=arr[b-j];
      arr[b-j]=temp;
    }
  }

  for(i=1;i<n+1;i++){
    cout<<arr[i]<<" ";
  }

  return 0;
}
