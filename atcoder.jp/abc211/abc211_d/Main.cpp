#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int> >;

int main(){
  ll waru=pow(10,9)+7;
  int n,m;
  cin>>n>>m;
  Graph gr(n);
  rep(i,m){
    int a,b;
    cin>>a>>b;
    a--;
    b--;
    gr.at(a).push_back(b);
    gr.at(b).push_back(a);    
  }
  
  queue<int> que;
  vector<ll> mincost(n,LLONG_MAX),root(n,0);
  que.push(0);
  mincost.at(0)=0;
  root.at(0)=1;
  while(!que.empty()){
    
    int v=que.front();
    //cout<<v<<endl;
    que.pop();
    for(int nv:gr.at(v)){
      if(nv==v)continue;      
      if(mincost.at(v)>=mincost.at(nv))continue;      
      if(mincost.at(nv)!=mincost.at(v)+1)que.push(nv);
      mincost.at(nv)=mincost.at(v)+1;
      root.at(nv)+=root.at(v);
      root.at(nv)%=waru;
      
     /* cout<<"nv="<<nv<<"  root="<<root.at(nv)
        <<" cost="<<mincost.at(nv)<< endl;*/
    }
    

  }
  cout<<root.at(n-1)<<endl;
  //rep(i,n)cout<<"root("<<i<<")="<<root.at(i)<<endl;
  
}