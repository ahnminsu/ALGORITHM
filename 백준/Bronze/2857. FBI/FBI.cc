#include <iostream>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[5];
    int cnt = 0;
    string str;

    for (int i=0;i<5;i++) {
        cin>>str;
        if (str.find("FBI") != string::npos) {
            arr[cnt++]=i+1;
        }
    }

    if (cnt==0) {
        cout<<"HE GOT AWAY!";
    }
    else {
        for(int i=0;i<cnt;i++) {
            cout<<arr[i]<<" ";
        }
    }

    return 0;
}