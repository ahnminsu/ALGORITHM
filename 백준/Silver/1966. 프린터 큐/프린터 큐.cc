#include <iostream>
#include <queue>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin>>T;

    for(int i=0;i<T;i++){
        int N,M;
        cin>>N>>M;

        queue<pair<int, int>>q;
        priority_queue<int>pq;

        for(int i=0;i<N;i++){
            int import;
            cin>>import;
            q.push({import,i});
            pq.push(import);
        }

        int cnt =0;

        while(!q.empty()){
            int CurImport = q.front().first;
            int CurIndex = q.front().second;
            q.pop();

            if(pq.top() == CurImport){
                pq.pop();
                cnt++;

                if(CurIndex==M){
                    cout<<cnt<<"\n";
                    break;
                }
            }
            else {
                q.push({CurImport,CurIndex});
            }
        }
    }
    return 0;
}