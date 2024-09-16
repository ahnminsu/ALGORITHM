#include<iostream>
#include<string>
#include<queue>
using namespace std;

int n,m;
int map[101][101];
bool visited [101][101];
int dist[101][101];
int dx[] ={-1,1,0,0};
int dy[] ={0,0,-1,1};
queue<pair<int,int>>q;

void bfs(int x, int y){
    q.push({x,y});
    visited[x][y]=true;
    dist[x][y]=1;

    while(!q.empty()){
        int a = q.front().first;
        int b = q.front().second;
        q.pop();

        for(int i=0;i<4;i++){
            int nx = a + dx[i];
            int ny = b+ dy[i];

            if(nx>=0 && ny>=0 && nx<n && ny<m){
                if(map[nx][ny]==1 && visited[nx][ny]==0){
                    q.push({nx,ny});
                    visited[nx][ny]=true;
                    dist[nx][ny] = dist[a][b] + 1;
                }
            }

        }
    }
}


int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n>>m;

    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        for(int j =0;j<m;j++){
            map[i][j] = str[j] - '0';
        }
    }

    bfs(0,0);

    cout<< dist[n-1][m-1];

    return 0;
}