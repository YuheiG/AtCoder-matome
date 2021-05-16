#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main(){
  int n,q,t,a,b;
  string s,s1,s2;
  cin>>n>>s>>q;
  s1=s.substr(0,n);
  s2=s.substr(n,n);
  int c=1;
  char mozi;
  for(int i=0;i<q;i++){
    cin>>t>>a>>b;
    a--;
    b--;
    if(t==2){
      c*=-1;
      continue;
    }
    if(a<n&&b<n){
      if(c==1){
        mozi=s1.at(a);
        s1.at(a)=s1.at(b);
        s1.at(b)=mozi;
      }else{
        mozi=s2.at(a);
        s2.at(a)=s2.at(b);
        s2.at(b)=mozi;
      }
    }else if(a>=n&&b>=n){
      a-=n;
      b-=n;
      if(c==1){
        mozi=s2.at(a);
        s2.at(a)=s2.at(b);
        s2.at(b)=mozi;
      }else{
        mozi=s1.at(a);
        s1.at(a)=s1.at(b);
        s1.at(b)=mozi;
      }
    }else{
      b-=n;
     // cout<<i<<" c="<<c<<" s1="<<s1<<" s2="<<s2<<endl;
     if(c==1){
        mozi=s1.at(a);
        s1.at(a)=s2.at(b);
        s2.at(b)=mozi;
      }else{
        mozi=s2.at(a);
        s2.at(a)=s1.at(b);
        s1.at(b)=mozi;
      }
     // cout<<i<<" c="<<c<<" s1="<<s1<<" s2="<<s2<<endl;
    }
  }
  if(c==1){
    cout<<s1<<s2<<endl;
  }else{
    cout<<s2<<s1<<endl;
  }
}