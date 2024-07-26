#include <iostream>
#include <string>
using namespace std;

int main() {
  int num;
  int a;
  string s;
  int i,j,k;

  cin>>num;

  for(i=0;i<num;i++){
    cin>>a>>s;
    for(j=0;j<s.length();j++){
      for(k=0;k<a;k++){
         cout<<s[j]; 
      }
    }
    cout<<endl;
  }
  
  return 0;
}