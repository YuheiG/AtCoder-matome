#include <bits/stdc++.h>
using namespace std;

int main(){
  int x,y,a,b;
  cin>>x>>y;
  if(y%2==1){
    cout<<"No"<<endl;
    return 0;
  }
  
  if(y-2*x>=0&&4*x-y>=0){
    cout<<"Yes"<<endl;
  }else{
    cout<<"No"<<endl;
  }

  
}