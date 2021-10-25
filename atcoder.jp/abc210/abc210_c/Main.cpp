#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int> >;

int main(){
  int n,k;
  map<ll,int> candy;
  cin>>n>>k;
  vector<int> cc;
  
  int ans=0;
  int now=0;
  for(int i=0;i<n;i++){
    ll c;
    cin>>c;
    cc.push_back(c);
    candy.insert(make_pair(c,0)); 
    candy.at(c)++;
    if(candy.at(c)==1)now++;
    
   // cout<<cc.size()<<" "<<candy.size()<<endl;
    if(i<k-1)continue;
    
    ans=max(ans,now);
    candy.at(cc.at(i-k+1))--;
    if(candy.at(cc.at(i-k+1))==0)now--;
    

  }
  cout<<ans<<endl;

  return 0;
}
