#include<iostream>
 
using namespace std;
 
int main(){
    
    int x,y,z;
    cin>>x>>y>>z;
    
    int a=max(x,y);
    int b=max(a,z);
    
    int c=min(x,y);
    int d=min(c,z);
    
      cout<<(b-d)<<endl;   
}