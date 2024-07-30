#include <iostream>
#include <string>
using namespace std;

int main() {
  int num;
  string s;
  int i;

  cin>>num;

  cin.tie(NULL);
  ios::sync_with_stdio(false);
  
  for(i=0;i<num;i++){
    cin>>s;
    cout<<s[0]<<s[s.length()-1]<<"\n";
    }
  
  return 0;
}
