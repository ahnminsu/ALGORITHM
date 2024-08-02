#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    deque<int>d;

    int n;
    int v[1000000];

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    int card = 1;
    for (int i = n - 1; i >= 0; i--) {

        if (v[i] == 1) {
            d.push_back(card);
        }else if (v[i] == 2) {
            int tmp = d.back();
            d.pop_back();
            d.push_back(card);
            d.push_back(tmp);
        }else if (v[i] == 3) {
            d.push_front(card);
        }

        card++;
    }

    for (int i = n-1; i >=0; i--) cout << d[i] << ' ';
    cout << '\n';


    return 0;
}
