#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--){
        
          int a,b,n,sum=0,count=0;
          cin>>a>>b>>n;
         while(sum<=n){ 
          if(a>=b){
          b=b+a;
          sum=b;
          count++;
          }
          
           else{
          a=a+b;
          sum=a;
          count++;
          
         
           }
          
         }
         cout<<count<<endl;
           
    }
}