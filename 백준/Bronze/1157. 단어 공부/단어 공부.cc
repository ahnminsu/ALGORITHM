#include<iostream>                       
#include<string>                         
using namespace std;                     
                                         
int main(){                              
   int alpha[26]={0,};                    
   int cnt =0;                           
   string str;                           
                                         
   cin>>str;                             
                                         
   for(int i=0;i<str.length();i++){      
       if(str[i]<97)                     
           alpha[str[i]-65]++;           
       else alpha[str[i]-97]++;          
   }                                     
                                         
   int max =0;                           
   int max_index=0;                      
                                         
   for(int i=0;i<26;i++){                
       if(max<alpha[i]){                 
           max=alpha[i];                 
           max_index=i;                  
       }                                 
   }                                     
                                         
    for (int i = 0; i < 26; i++) {       
        if (max == alpha[i]) cnt++;      
    }                                    
                                         
    if(cnt>1) cout<<"?";                 
    else cout<<char(max_index+65);       
                                         
}                                        