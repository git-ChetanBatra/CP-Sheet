#include<iostream>
#include<string>
using namespace std;

int main(){
    
    int n,x=0;
    cin>>n;
    string y;
  while(n--){
      cin>>y;
      
      if(y[1]=='+'){
      ++x;
      }
      else{
      --x;
      }
  }
   cout<<x<<endl;
    return 0;
}