#include <iostream>
using namespace std;

int main() {
  int n,m;
  int a,b,c;
  int i,k,j;

  cin>>n>>m;

  int arr[n+1];

  for(i=0;i<=n;i++){
    arr[i]=0;
  }
  
  for(k=0;k<m;k++){
    cin>>a>>b>>c;
    for(j=a;j<=b;j++){
      arr[j]=c;
    }
  }

  for(k=1;k<=n;k++){
    cout<<arr[k]<<" ";
  }

  return 0;
}