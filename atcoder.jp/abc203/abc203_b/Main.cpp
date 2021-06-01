#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using Graph = vector<vector<int> >;

int main() {
  int k,n,ans=0;
  cin>>n>>k;
  ans=(n*(n+1)/2)*k*100+(k*(k+1)/2)*n;
  cout<<ans<<endl;
}