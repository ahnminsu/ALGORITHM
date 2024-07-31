#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    deque<int>d;
    int n;

    cin>>n;

    string str;
    int num;

    for(int i=0;i<n;i++) {
        cin >> str;
        if (str == "push_front") {
            cin >> num;
            d.push_front(num);
        } else if (str == "push_back") {
            cin >> num;
            d.push_back(num);
        } else if (str == "pop_front") {
            if(d.empty()){
                cout<<"-1"<<"\n";
            }
            else{
                cout<<d.front()<<"\n";
                d.pop_front();
            }
        } else if (str == "pop_back") {
            if(d.empty()){
                cout<<"-1"<<"\n";
            }
            else{
                cout<<d.back()<<"\n";
                d.pop_back();
            }
        } else if (str == "size") {
            cout<<d.size()<<"\n";
        } else if (str == "empty") {
            cout<<d.empty()<<"\n";
        } else if (str == "front") {
            if(d.empty()){
                cout<<"-1"<<"\n";
            }
            else{
                cout<<d.front()<<"\n";
            }
        } else if (str == "back") {
            if(d.empty()){
                cout<<"-1"<<"\n";
            }
            else{
                cout<<d.back()<<"\n";
            }
        }
    }

    return 0;
}
