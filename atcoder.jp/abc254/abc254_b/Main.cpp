#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;


int main() {
  int n;
  cin>>n;
  vector<vector<ll>> ans(n+1);

  rep(i,n){
    if(i==0){
      ans.at(0).push_back(1);
      cout<<1<<endl;
      continue;
    }
    ans.at(i).push_back(1);
    cout<<1<<" ";

    rep(j,ans.at(i-1).size()-1){
      ans.at(i).push_back(ans.at(i-1).at(j)+ans.at(i-1).at(j+1));
      cout<<ans.at(i).at(j+1)<<" ";
    }
    ans.at(i).push_back(1);
    cout<<1<<endl;
  }
  

  return 0;   
  }
