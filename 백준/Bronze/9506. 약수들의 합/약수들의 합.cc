#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    while (true) {
        cin>>n;

        int arr[n];
        int cnt =0;
        int perfect =0;

        if (n == -1) {
            break;
        }

        for (int i=1;i<n;i++) {
            if (n%i == 0) {
                arr[cnt++] = i;
                perfect+=i;
            }
        }

        if (perfect == n) {
            cout<<n<<" = ";
            for (int i=0;i<cnt-1;i++) {
                cout<<arr[i]<<" + ";
            }
            cout<<arr[cnt-1]<<"\n";
        }
        else {
            cout<<n<<" is NOT perfect."<<"\n";
        }
    }
    return 0;
}