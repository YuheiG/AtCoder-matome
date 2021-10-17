#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using Graph = vector<vector<int> >;

int main() {
  vector<pair<int ,int>> pp;
  vector<long long> ans;
  long long K,k,ank;
  int a,n;
  cin>>n>>K;
  ank=K/n;
  k=K-(K/n)*n;
  rep(i,n){
    cin>>a;
    ans.push_back(ank);
  //  cout<<a<<endl;
    pp.push_back(make_pair(a,i));
  }
  sort(pp.begin(),pp.end());
 /* rep(i,n){
    cout<<pp.at(i).first<<" "<<pp.at(i).second<<endl;
  }*/
  rep(i,k){
    ans.at(pp.at(i).second)++;
  }
  rep(i,n){
    cout<<ans.at(i)<<endl;
  }
  return 0;
}