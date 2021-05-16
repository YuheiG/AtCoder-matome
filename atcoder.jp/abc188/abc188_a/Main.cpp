#include <bits/stdc++.h>
using namespace std;

int main(){
  int x,y,a,b;
  cin>>x>>y;
  a=min(x,y);
  b=max(x,y);
  if(a+3>b){
    cout<<"Yes"<<endl;
  }else{
    cout<<"No"<<endl;
  }
  
}