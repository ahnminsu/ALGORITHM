#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    deque<int>d;

    int n,k,m;
    bool check;
    int cnt =0;

    cin>>n>>k>>m;

    for(int i=1;i<=n;i++){
        d.push_front(i);
    }

    while(!d.empty()){
        if(check){
            for(int i = 0; i < k - 1; i++){
                d.push_back(d.front());
                d.pop_front();
            }
            cout << d.front() << "\n";
            d.pop_front();
        }
        else{
            for(int i = 0; i < k - 1; i++){
                d.push_front(d.back());
                d.pop_back();
            }
            cout << d.back() << "\n";
            d.pop_back();
        }
        cnt++;
        if(cnt == m){
            check = !check;
            cnt = 0;
        }
    }
    return 0;
}
