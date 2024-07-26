#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cin>>str;

    int index=0;
    string alpha[8]={"c=","c-","dz=","d-","lj","nj","s=","z="};

    for(int i=0;i<8;i++){
        while(true) {
            index = str.find(alpha[i]);
            if (index == string::npos)
                break;

            str.replace(index, alpha[i].length(), "a");
        }
    }

    cout<<str.length();

    return 0;
}