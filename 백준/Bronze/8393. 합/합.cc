#include<iostream>
using namespace std;

int main(){
	
	int num;
	int sum=0;
	int i;
	
	cin>>num;
	
	for (i=1;i<num+1;i++){
		sum+=i;
	}
	
	cout<<sum;
	
	return 0;
 
}
