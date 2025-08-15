#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    set<int> s;
    int n;
    int num;

    cin>>n;

    for (int i=0;i<n;i++) {
        cin>>num;
        s.insert(num);
    }
    
    for (int res : s) {
        cout<<res<<" ";
    }

    return 0;
}