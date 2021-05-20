#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using Graph = vector<vector<int> >;

int main(){
  int a,b,c,k,ans=0;
  cin>>a>>b>>c>>k;
  if(a>=k){
    cout<<k<<endl;
    return 0;
  }
  if(a+b>=k&&k>a){
    cout<<a<<endl;
    return 0;
  }
  ans=a;
  k=k-a-b;
  ans=a-k;
  cout<<ans<<endl;
}
