#include<iostream>
#include<queue>
using namespace std;

int n,a,b,m;
int map[101][101];
int dist[101];
queue<int>q;

int bfs(int a, int b){
    q.push(a);
    dist[a] =0;

    while (!q.empty()){
        int A = q.front();
        q.pop();

        if(A == b){
            return dist[A];
        }

        for(int i=1; i<=n;i++){
            if(map[A][i]==1 && dist[i] == -1){
                dist[i] = dist[A] +1;
                q.push(i);
            }
        }
    }
    return -1;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n>>a>>b>>m;

    for(int i=0; i<m;i++){
        int x,y;
        cin>>x>>y;
        map[x][y] = map [y][x] = 1;
    }

    for(int i=1;i<=n;i++){
        dist[i]=-1;
    }

    int res = bfs(a,b);

    cout<<res;

    return 0;
}