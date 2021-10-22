#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int> >;

vector<bool> seen,ea;
Graph gr(100000);

void dfs(int v){
  seen.at(v)=true;
  
  for(auto next_v:gr.at(v)){
    if(seen.at(next_v))continue;
    ea.at(next_v)=!ea.at(v);  
    dfs(next_v);
  }
  
}
int main(){  
  int n,q;
  cin>>n>>q;
  rep(i,n-1){
    int a,b;
    cin>>a>>b;
    a--;
    b--;
    gr.at(a).push_back(b);
    gr.at(b).push_back(a);
  }
  seen.assign(n,false);
  ea.assign(n,false);
  dfs(0);
  
/*  rep(i,n){
    cout<<"i="<<i<<" ";
    rep(j,gr.at(i).size()){
      cout<<gr.at(i).at(j)<<" ";
    }
    cout<<endl;
  }
  
  rep(i,n){
    cout<<seen.at(i)<<" ";
  }
  cout<<endl;
  */
  rep(i,q){
    int c,d;
    cin>>c>>d;
    c--;
    d--;
    
   // cout<<ea.at(c)<<" "<<ea.at(d)<<"---";
    if(ea.at(c)==ea.at(d)){
      cout<<"Town"<<endl;
    }else{
      cout<<"Road"<<endl;
    }
  }
  
  return 0;
}

