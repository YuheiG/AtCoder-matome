#include <bits/stdc++.h>
using namespace std;

int main(){
  int atugi,btugi,ans,N,ai,bi,amin=1000000,bmin=1000000,cmin=1000000;
  vector<int> a(10000),b(10000),c(10000);
  cin>>N;
  for(int i=0;i<N;i++){
    cin>>a.at(i)>>b.at(i);
    c.at(i)=a.at(i)+b.at(i);
  }
  
  for(int i=0;i<N;i++){
    if(a.at(i)<=amin){
      atugi=amin;
      amin=a.at(i);
      ai=i;
    }
    if(b.at(i)<=bmin){
      btugi=bmin;
      bmin=b.at(i);
      bi=i;
    }
    if(c.at(i)<=cmin){
      cmin=c.at(i);
    }
  }
    if(ai==bi){
      if(atugi<btugi){
        amin=atugi;
      }else{
        bmin=btugi;
      }
    }
  
//  cout<<amin<<" "<<bmin<<" "<<cmin<<endl;
  ans=max(amin,bmin);
  ans=min(ans,cmin);
  cout<<ans<<endl;
  
}