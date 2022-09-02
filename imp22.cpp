#include<bits/stdc++.h>

using namespace std;

int main(){
string table;
cin>>table;
string h;
int n=5;
bool flag=0;
while(n--)
{
   cin>>h;
   if(h[0]==table[0] || h[1]==table[1])
   flag=1;
}
 if(flag)
 {
     cout<<"YES\n";
 }
 else
 cout<<"NO\n";
}