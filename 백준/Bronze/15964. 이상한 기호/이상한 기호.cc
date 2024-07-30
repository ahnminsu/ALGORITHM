#include <iostream>
using namespace std;

int calculation (int x, int y){
    return (x+y)*(x-y);
}


int main() {
    int a,b;

    cin>>a>>b;

    cout<<calculation(a,b);

    return 0;
}
