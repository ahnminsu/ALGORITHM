#include<iostream>
using namespace std;

int main(){
	
	int a,b,c;
	
	cin>>a>>b>>c;
	
	if(a==b&&b==c&&a==c){
		cout<<10000+a*1000;
	}
	
	if (a==b&&a!=c){
		cout<<1000+a*100;
	}
	else if (a==c&&a!=b){
		cout<<1000+a*100;
	}
	else if (b==c&&a!=b){
		cout<<1000+c*100;
	}
	
	if(a!=b&&b!=c&&a!=c){
		int max=a;
		if(b>max) max=b;
		if(c>max) max=c;
		
		cout<<max*100;
	}	
	return 0;
}
