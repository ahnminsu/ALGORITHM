#include <iostream>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N,M;
    bool check[1000001] = {false,};

    check[0] = check[1] = true;

    cin>>N>>M;

    for(int i = 2; i * i <= M; i++){
        if(check[i] == 1){
            continue;
        }
        for(int j = i*i; j<=M; j+=i){
            check[j] = true;
        }
    }

    for(int i=N; i<=M;i++){
        if(!check[i]) cout<<i<<"\n";
    }

    return 0;
}