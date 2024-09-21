#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    cin>>n;

    int i=666;
    int cnt =0;
    string str;

    while(true){
        str = to_string(i);
        for(int j =0; j<str.length()-2;j++){
            if(str[j] == '6' && str[j+1] == '6' && str[j+2] == '6'){
                cnt++;
                break;
            }
            }
        if(cnt ==n){
            cout<<i;
            break;
        }
        i++;
        }

    return 0;
}