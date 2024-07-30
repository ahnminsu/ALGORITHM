#include <iostream>
using namespace std;

long long calculation (int x, int y){
    return (long long) (x+y)*(x-y);
}


int main() {
    int a,b;

    cin>>a>>b;

    cout<<calculation(a,b);

    return 0;
}
