#include <iostream>
#include <queue>
using namespace std;

int main() {

    queue<int>q;

    int n,k;

    cin>>n>>k;

    for(int i=1;i<=n;i++){
        q.push(i);
    }

    while(q.size()>=k){
        q.push(q.front());
        for(int i=1;i<=k;i++){
            q.pop();
        }
    }

    cout<<q.front();

    return 0;
}
