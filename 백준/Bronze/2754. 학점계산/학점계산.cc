#include <iostream>
#include <string>
using namespace std;

int main() {

    string str;

    cin>>str;
    double score;

    cout<<fixed;
    cout.precision(1);


    if(str[0]=='A') score = 4;
    else if(str[0]=='B') score = 3;
    else if(str[0]=='C') score = 2;
    else if(str[0]=='D') score = 1;
    else score =0;

    if(str[1]=='+') score+=0.3;
    else if (str[1]== '-') score-=0.3;

    cout<<score;

    return 0;
}
