#include<iostream>
using namespace std;

int main(){
	
	int price;
	int num;
	int a,b;
	int i;
	
	cin>>price;
	cin>>num;
	
	for(i=0;i<num;i++){
		cin>>a>>b;
		price-=a*b;
	}
	
	if (price==0)
		cout<<"Yes";
	else
		cout<<"No";
	
	return 0;
 
}
