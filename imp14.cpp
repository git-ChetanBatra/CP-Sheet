#include<bits/stdc++.h>
using namespace std;
int main(){
 int n , k;
 cin>>n>>t;
 while(k--)
 {
     if(n%10==0)
     n=n/10;
     else
     n-=1;

 }
 cout<<n;
return 0;
}