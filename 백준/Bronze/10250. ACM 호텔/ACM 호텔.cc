#include<iostream>
using namespace std;

int main() {

    int num;
    int h,w,n;


    cin>>num;

    for(int i=0;i<num;i++) {

        cin >> h >> w >> n;

        int room = 0;

        if (n % h == 0) {
            room = h;
            room *= 100;
            room += (n / h);
        } else {
            room = n % h;
            room *= 100;
            room += (n / h + 1);
        }

        cout << room << endl;
    }

    return 0;

}