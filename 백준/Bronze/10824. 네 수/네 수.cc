#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int A,B,C,D;
    cin>>A>>B>>C>>D;
    
    string str1 = to_string(A) + to_string(B);
    string str2 = to_string(C) + to_string(D);
    
  

    // 10,000,001,000,000 

    cout<< stoll(str1) + stoll(str2);
    return 0;
}