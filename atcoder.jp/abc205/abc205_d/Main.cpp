#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using Graph = vector<vector<int> >;

vector<long long> A(100010),Ae(100010);
int n;
void que(long long &k){ 
  long long ok,ng,ck,ans;
  ok=0;
  ng=n+1;
  while(ng-ok!=1){
    ck=(ok+ng)/2;
    if(Ae.at(ck)<k){
      ok=ck;
    }else{
      ng=ck;
    }
   // cout<<ok<<" - "<<ng<<endl;
  }
  
  ans=A.at(ok)+k-Ae.at(ok);
  cout<<ans<<endl;
}

int main() {
  int q;
  long long k;
  cin>>n>>q;
  Ae.at(0)=0;
  rep(i,n+1){
    if(i==0){
      A.at(i)=0;
      continue;
    }
    cin>>A.at(i);
    Ae.at(i)=A.at(i)-A.at(i-1)-1+Ae.at(i-1);
   // cout<<Ae.at(i)<<endl;
  }
  A.at(n+1)=pow(10,18)+1;
  Ae.at(n+1)=A.at(n+1)-A.at(n)-1+Ae.at(n);
  
  
  rep(i,q){
    cin>>k;
    que(k);
  }
  return 0;
  
}

