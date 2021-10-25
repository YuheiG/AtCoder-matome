#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int> >;

int main(){  
  int n,a,x,y;
  cin>>n>>a>>x>>y;
  ll ans=0;
  if(n>a){
    ans+=(n-a)*y;
    n=a;
  }
  ans+=x*n;
  cout<<ans<<endl;
  return 0;
}

