#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using Graph = vector<vector<int> >;

int main(){
  vector<int64_t> a,maxv,wa;
  int64_t ans=0,amax=0;
  int64_t n,A;
  cin>>n;
  rep(i,n){
    cin>>A;
    a.push_back(A);
    amax=max(A,amax);
    maxv.push_back(amax);
  }
  int64_t souwa=0;
  rep(i,n){
    souwa+=a.at(i);
    wa.push_back(souwa);
  }
  int64_t mae=0;
  rep(i,n){
    ans=mae+wa.at(i);
    mae=ans;
    int64_t Ans;
    Ans=ans+(i+1)*maxv.at(i);
    cout<<Ans<<endl;
  }

}