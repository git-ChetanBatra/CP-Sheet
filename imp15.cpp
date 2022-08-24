#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=0;
    int k,n,w;
    cin>>k>>n>>w;
    
    for(int i=1;i<=w;i++)
    {
        a=i*k+a;
    }
    
    if(a<=n)
    cout<<0<<endl;
    else
    cout<<(a-n)<<endl;
    
    
}