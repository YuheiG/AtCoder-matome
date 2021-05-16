#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t x,k,kwant,d,ans1,ans2;
  cin>>x>>k>>d;
  ans1=x%d;
  if(x<0){
    ans2=ans1+d;
  }else{
    ans2=ans1-d;
  }
  bool ans1c;
  if(abs(ans1)<abs(ans2)){
    kwant=abs(x/d);
    ans1c=true;
  }else{
    ans1c=false;
    kwant=abs(x/d)+1;
  }
  
  if(k-kwant<=0){
    cout<<abs(abs(x)-k*d)<<endl;
    return 0;
  }

  //cout<<kwant<<endl;
  if((k-kwant)%2==0){
    if(ans1c){
      cout<<abs(ans1)<<endl;
    }else{
      cout<<abs(ans2)<<endl;
    }
  }else{
    if(ans1c){
      cout<<abs(ans2)<<endl;
    }else{
      cout<<abs(ans1)<<endl;
    }
  }
  
}