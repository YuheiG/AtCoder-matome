#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using Graph = vector<vector<int> >;

int main(){
  int n,m,H;
  vector<int> h,maxh(100000);
  cin>>n>>m;
  rep(i,n){
    cin>>H;
    h.push_back(H);
  }
 
  int a,b;
  rep(i,m){
    cin>>a>>b;
    a--;
    b--;
    maxh.at(a)=max(maxh.at(a),h.at(b));
    maxh.at(b)=max(maxh.at(b),h.at(a));
  }
  int ans=0;
  rep(i,n){
    if(h.at(i)>maxh.at(i))ans++;
  }
  cout<<ans<<endl;
  
}