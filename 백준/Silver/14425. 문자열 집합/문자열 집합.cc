#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);


    map<string, bool> map;
    int N, M;
    string str;
    int cnt = 0;

    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> str;
        map.insert({str, true});
    }

    for (int i = 0; i < M; i++)
    {
        cin >> str;
        if (map[str]) cnt++;
    }
    cout << cnt;

    return 0;
}