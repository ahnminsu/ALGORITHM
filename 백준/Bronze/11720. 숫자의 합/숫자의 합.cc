#include <iostream>
#include <string>
using namespace std;

int main() {
  int num;
  char s;
  int i;
  int sum=0;

  cin>>num;

  for(i=0;i<num;i++){
    cin>>s;
    sum+=s-'0';
  }

  cout<<sum;
  
  return 0;
}