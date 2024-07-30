#include<iostream>
using namespace std;

int main(){
	
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	int num;
	int a,b;
	int i;
	
	cin>>num;
	
	for(i=1;i<num+1;i++){
		cin>>a>>b;
		cout<<"Case #"<<i<<": "<<a+b<<"\n";
	}
	
	return 0;
 
}