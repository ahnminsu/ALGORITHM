#include<iostream>
#include<string>
using namespace std;

int main(){
   string str;
   int count =1;
   getline(cin,str);

   if(str.empty()){
    cout <<"0";
    return 0;
   }

   
   if(str[0]==' ')
    count--;
   if(str[str.length()-1]==' ')
    count--;

   for(int i=0;i<str.length();i++){
    if(str[i]==' '){
        count++;
    }
   }

   cout<<count;
   return 0;
}