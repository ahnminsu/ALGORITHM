#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n, a, b;
    cin >> n;
    queue<int> q;
    int max_size = 0;
    int min_b = 100000;

    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a == 1) {
            cin >> b;
            q.push(b);
            if (q.size() >= max_size) {
                if(q.size() == max_size){
                    if(b<min_b){
                        min_b = b;
                    }
                }
                else{
                    max_size = q.size();
                    min_b = b;
                }
            }
        }
        else {
                q.pop();
            }
        }
    cout << max_size << ' ' << min_b;
    return 0;
}
