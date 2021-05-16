#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main(){
  int64_t n;
  int a,c0=0,c1=0,c2=0,c,k;
  cin>>n;
  for(int i=0;n>0;i++){
    a=n%10;
    a%=3;
    if(a==0){
      c0++;
    }else if(a==1){
      c1++;
    }else{
      c2++;
    }
    n/=10;
  }
  c=c1+c2*2;
  k=c0+c1+c2;
  if(c%3==0){
    cout<<0<<endl;
    return 0;
  }else if(c%3==1){
    if(c1>0){
      if(k>1){
      cout<<1<<endl;
      return 0;
      }
    }else if(c2>1){
      if(k>2){
        cout<<2<<endl;
        return 0;
      }
    }
  }else if(c%3==2){
    if(c2>0){
      if(k>1){
      cout<<1<<endl;
      return 0;
      }
    }else if(c1>1){
      if(k>2){
      cout<<2<<endl;
      return 0;
      }
    }
  }
  cout<<-1<<endl;
}