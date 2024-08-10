#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[9];
    int price = 0;
    cin>>price;
    for(int i=0;i<9;i++){
        cin>>arr[i];
        price -= arr[i];
    }
    cout<< price <<"\n";

    return 0;
}