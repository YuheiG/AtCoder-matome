#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,a,b,amax=0,bmin=1001,ans;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a;
    amax=max(amax,a);
  }
  for(int i=0;i<n;i++){
    cin>>b;
    bmin=min(bmin,b);
  }
  ans=bmin-amax+1;
  if(ans<0)ans=0;
  cout<<ans<<endl;
  //cout<<amax<<"  "<<bmin<<endl;
  
}