#include<bits/stdc++.h>
using namespace std;
int main(){
 int i,n,a,b,count=0,max=0;
 cin>>n;
 for(i=0;i<n;++i)
 {
     cin>>a>>b;
     count=b-a+count;
     if(max<count)
     max=count;
 }
 cout<<max;
return 0;
}