#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using Graph = vector<vector<int> >;

int main() {
  int n,A,ans;
  
  cin>>n;
  ans=0;
  rep(i,n){
    cin>>A;
    if(A>10){
      ans+=A-10;
    }
  }
  cout<<ans<<endl;
  
  return 0;
  
}