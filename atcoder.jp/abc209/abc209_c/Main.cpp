#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int> >;

int main(){  
  
  ll ans,waru=pow(10,9)+7;
  int n;
  cin>>n;
  vector<ll> c(n);
  
  rep(i,n){
    cin>>c.at(i);
  }
  
  sort(c.begin(),c.end());
  ans=c.at(0);
  for(int i=1;i<n;i++){
    ans*=c.at(i)-i;
    ans%=waru;
  }
  cout<<ans<<endl;
  
  return 0;
}

