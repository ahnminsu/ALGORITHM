#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string WB[8]={
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW"
};

string BW[8]={
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB"
};

string board[50];

int WB_cnt(int x,int y)
{
    int cnt=0;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[x+i][y+j]!=WB[i][j]) cnt++;
        }
    }
    return cnt;
}

int BW_cnt(int x,int y)
{
    int cnt=0;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[x+i][y+j]!=BW[i][j]) cnt++;
        }
    }
    return cnt;
}


int main() {

    int n,m;
    int cnt;
    int min_val=65;

    cin>>n>>m;

    for(int i=0;i<n;i++){
        cin>>board[i];
    }

    for(int i=0;i+8<=n;i++){
        for(int j=0;j+8<=m;j++){
            int temp;
            temp=min(WB_cnt(i,j),BW_cnt(i,j));
            if(temp<min_val) min_val=temp;
        }
    }
    cout<< min_val;
    
    return 0;

}