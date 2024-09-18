#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int N;
string str;
int apt;
int cnt[625];
int map[25][25];
bool visited[25][25];
int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};

void dfs(int x,int y){
    visited[x][y]=true;
    cnt[apt]++;

    for(int i=0;i<4;i++){
        int nx = x+dx[i];
        int ny = y+dy[i];

        if(nx>=0 && ny>=0 && nx<N && ny<N){
            if(map[nx][ny]==1 && visited[nx][ny]==0){
                dfs(nx,ny);
            }
        }
    }
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>N;

    for(int i=0;i<N;i++){
        cin>>str;
        for(int j=0;j<N;j++){
            map[i][j] = str[j] - '0';
        }
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(visited[i][j]==0 && map[i][j]==1) {
                apt++;
                dfs(i, j);
            }
        }
    }

    sort(cnt+1,cnt+apt+1);

    cout<<apt<<"\n";

    for(int i=1;i<=apt;i++){
        cout<<cnt[i]<<"\n";
    }

    return 0;
}