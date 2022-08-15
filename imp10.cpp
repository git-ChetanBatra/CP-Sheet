#include<iostream>
 
using namespace std;
 
int main(){
    
    int n,b;
    cin>>n;
    int i;
    int k=0;
    
    for(i=0;i<n;i++){
        cin>>b;
        
        if(b==1)
        k=k+1;
        
        else
        k=k+0;
    }
    
    if(k==0)
    cout<<"EASY"<<endl;
    else
    cout<<"HARD"<<endl;
    
    
}