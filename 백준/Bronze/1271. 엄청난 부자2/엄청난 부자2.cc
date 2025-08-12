#include <iostream>
#include <cstring>
using namespace std;

// 두 문자열 숫자 a,b 중에 더 큰 쪽 반환
char *big(char *a, char *b) {
    for (int i=0; i< strlen(a); i++) {
        if (a[i]<b[i]) {
            return b;
        }
        if (a[i]>b[i]) {
            return a;
        }
    }
    return a;
}

// a에서 b를 빼는 함수
void subtract(char *a, char *b) {
    // 각 자리 빼기
    for (int i =0; i< strlen(b); i++) {
        a[i] = a[i] - b[i] + '0';
    }
    // 자리 빌림
    for (int i = strlen(b) -1;i>=0;i--) {
        if (a[i] < '0') {
            a[i] += 10;
            a[i-1]--;
        }
    }
}

// 나눗셈의 뺄샘 반복
void devidesubtract(char *a, char *b, char *q, int idx) {
    q[idx] = '0';

    while (a[idx -1] > '0' || big( a+idx, b) == a + idx) {
        subtract(a + idx, b);
        ++q[idx];
    }
}

// 전체 나눗셈 수행
void devide(char *a, char *b, char *q) {
    int idx = 0;
    int digit = strlen(a)-strlen(b);

    while (idx <= digit) {
        devidesubtract(a,b,q,idx++);
    }
    q[idx] = '\0';
}



int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    char a[1001];   // 10의 1000승까지라 1뒤에 0이 1000개 올수있음
    char b[1001];
    char q[1001];
    int qi= 0, ai =0;

    cin>>a>>b;
    devide(a,b,q);

    // 몫에서 0 제거
    while (q[qi] == '0') {
        qi++;
    }
    // 나머지에서 0 제거
    while (a[ai] == '0') {
        ai++;
    }

    // 몫이 비어있으면 0 설정
    if (q[0] == '\0') {
        q[0] = '0';
        q[1] = '\0';
    }

    // 나머지가 비어있으면 인덱스 조정
    if (a[ai] == '\0') {
        ai--;
    }
    // 몫이 전부 0이면 인덱스 조정
    if (q[qi] == '\0') {
        qi--;
    }

    cout<<q+qi<<"\n";
    cout<<a+ai<<"\n";

    return 0;
}