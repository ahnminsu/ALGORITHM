#include <iostream>
#include <vector>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int>v;
    string str;

    for (int i=0;i<5;i++) {
        cin>>str;
        if (str.find("FBI") != string::npos) {
            v.push_back(i+1);
        }
    }

    if (v.size()==0) {
        cout<<"HE GOT AWAY!";
    }
    else {
        for(int i :v) {
           cout<<i <<" ";
        }
    }

    return 0;
}