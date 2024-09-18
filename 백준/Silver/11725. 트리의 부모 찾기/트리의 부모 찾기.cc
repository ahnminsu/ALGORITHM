#include <iostream>
#include <vector>

using namespace std;

vector<int> map[100001];
int arr[100001];
bool visited[100001];

void dfs(int n) {
    visited[n] = true;
    for (int i : map[n]) {
        if (visited[i]==0) {
            arr[i] = n;
            dfs(i);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    for (int i = 0; i < N - 1; i++) {
        int a, b;
        cin >> a >> b;
        map[a].push_back(b);
        map[b].push_back(a);
    }

    dfs(1);

    for (int i = 2; i <= N; i++) {
        cout << arr[i] << '\n';
    }

    return 0;
}