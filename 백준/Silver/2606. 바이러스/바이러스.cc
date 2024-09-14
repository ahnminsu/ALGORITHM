#include<iostream>
#include<queue>
using namespace std;

int N,M;
int cnt = 0;
int map[101][101];
bool visited[101];
queue<int>q;


void bfs(int v){
    q.push(v);
    visited[v]=true;

    while(!q.empty()){
        v=q.front();
        q.pop();
        for(int i=1;i<=N;i++){
            if(map[v][i]==1 && visited[i]==0){
                q.push(i);
                visited[i]=true;
                cnt++;
            }
        }
    }
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>N>>M;

    for(int i=0;i<M;i++){
        int a,b;
        cin>>a>>b;
        map[a][b] = map[b][a] = 1;
    }

    for(int i=1;i<=N;i++){
        visited[i]=false;
    }


    bfs(1);

    cout<<cnt;

    return 0;
}