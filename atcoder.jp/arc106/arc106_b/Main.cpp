#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;
using Graph = vector<vector<int> >;

vector<bool> seen;
vector<int64_t> a,b;
int64_t a_wa,b_wa;

void dfs(const Graph &G,int v){
  seen.at(v)=true;
  a_wa+=a.at(v);
  b_wa+=b.at(v);
  
  for(auto next_v:G.at(v)){
    if(seen.at(next_v))continue;
    dfs(G,next_v);
  }
}

int main(){
  int n,m,A,B,c,d;
 
  cin>>n>>m;
  Graph G(n);
  seen.resize(n);
  for(int i=0;i<n;i++){
    cin>>A;
    a.push_back(A);
  }
  for(int i=0;i<n;i++){
    cin>>B;
    b.push_back(B);
  }
  for(int i=0;i<m;i++){
    cin>>c>>d;
    c--;
    d--;
    G.at(c).push_back(d);
    G.at(d).push_back(c);
  }
  seen.assign(n,false);
  for(int v=0;v<n;v++){
    if(seen.at(v))continue;
    a_wa=0;
    b_wa=0;
    dfs(G,v);
    if(a_wa!=b_wa){
      cout<<"No"<<endl;
      return 0;
    }
  }
  cout<<"Yes"<<endl;
  for(int i=0;i<seen.size();i++){
    //cout<<i<<" "<<seen.at(i)<<endl;
  }
  
}