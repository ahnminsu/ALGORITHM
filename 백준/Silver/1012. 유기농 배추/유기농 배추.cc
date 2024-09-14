#include<iostream>
using namespace std;

int T,M,N,K;
int map[50][50];
bool visited[50][50];
int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};

void dfs(int x, int y){
    visited[x][y] = true;

    for(int i=0;i<4;i++){
        int nx = x+ dx[i];
        int ny = y+ dy[i];

        if(nx >=0 && nx<N && ny>=0 && ny<M){
            if(map[nx][ny]==1 && visited[nx][ny]==0){
                dfs(nx,ny);
            }
        }
    }

}


int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>T;

    for(int i=0;i<T;i++){
        cin>>M>>N>>K;

        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                map[i][j]=0;
                visited[i][j]=0;
            }
        }

        for(int i=0;i<K;i++){
            int a,b;
            cin>>a>>b;
            map[b][a] = 1;
        }

        int cnt =0;

        for(int i=0;i<N;i++){
            for(int j =0;j<M;j++){
                if(map[i][j]==1 && visited[i][j]==0){
                    dfs(i,j);
                    cnt++;
                }
            }
        }
        cout<<cnt<<"\n";
    }


    return 0;
}