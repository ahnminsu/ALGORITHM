#include<iostream>
using namespace std;

int N,M;
int cnt;
int map[1001][1001];
bool visited[1001];

void dfs(int a){
    visited[a]=true;

    for(int i=1;i<=N;i++){
        if(visited[i]==0 && map[a][i]==1){
            dfs(i);
        }
    }
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>N>>M;

    for(int i=0;i<M;i++){
        int u,v;
        cin>>u>>v;
        map[u][v] = map[v][u] = 1;
    }

    for(int i=1;i<=N;i++){
        if(visited[i]==0){
            cnt++;
            dfs(i);
        }
    }

    cout<<cnt;

    return 0;
}