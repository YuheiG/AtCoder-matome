#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using Graph = vector<vector<int> >;

vector<bool> seen;
int c;
void dfs(const Graph &G, int v){
  seen.at(v)=true;
  c++;
  for(auto next_v:G.at(v)){
    if(seen.at(next_v)) continue;
    
    dfs(G,next_v);
  }
}

int main() {
  int n,m,ans;
  cin>>n>>m;
  Graph G(n);
  
  rep(i,m){
    int a,b;
    cin>>a>>b;
    G.at(a-1).push_back(b-1);
  }

  ans=0;

  rep(i,n){
    seen.assign(n,false);
    c=0;
    dfs(G,i);
    ans+=c;
  }
  
  cout<<ans<<endl;
  
  return 0;
  
}