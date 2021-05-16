#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t i,x,y,a,b,seki,wa;
  bool wa_low=false;
  cin>>x>>y>>a>>b;
  for(i=0;x<y;i++){
    if(x>(x+b)/a){
      if(x<y-b){
        x+=b;
      }else{
        cout<<i<<endl;
        return 0;
      }
      wa_low=true;
    }else{
      if(x<y/a){
        x*=a;
      }else{
        cout<<i<<endl;
        return 0;
      }
    }
    if(wa_low)break;
  }
  if(x<y){
    if(wa_low){
      if((y-x)%b==0)i--;
      i+=(y-x)/b;
      i++;
    }else{
      i--;
    }
  }
  
 // cout<<wa_low<<endl;
  cout<<i<<endl;
}