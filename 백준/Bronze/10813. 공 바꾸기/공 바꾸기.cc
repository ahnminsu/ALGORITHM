#include <iostream>
using namespace std;

int main() {
  int n,m;
  int i;
  int a,b;
  int temp;

  cin>>n>>m;
  
  int arr[n+1];
  
  for(i=1;i<=n;i++){
    arr[i]=i;
  }

  for(i=0;i<m;i++){
    cin>>a>>b;
    temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
  }

  for(i=1;i<=n;i++){
    cout<<arr[i]<<" ";
  }
  
  return 0;
}
