#include<iostream>
using namespace std;

int main(){
	
	int a,b,c;
	
	cin>>a>>b>>c;
	
	b+=c;
	
	a=(a+(b/60))%24;
	b=b%60;
	
	
	cout<<a<<" "<<b;
	
	return 0;
 
}