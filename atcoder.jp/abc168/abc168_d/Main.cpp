#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int> >;
  
int main(){
  int n,m;
  cin>>n>>m;
  
  Graph gr(n);
  for(int i=0;i<m;i++){
    int a,b;
    cin>>a>>b;
    a--;
    b--;
    gr.at(a).push_back(b);
    gr.at(b).push_back(a);
  }
  
  vector<int> dist(n,-1),houkou(n);
  queue<int> que;
  dist[0]=0;
  que.push(0);
  while(!que.empty()){
    int v=que.front();
    que.pop();
    
    for(int nv:gr[v]){
      if(dist[nv]!=-1)continue;
      houkou[nv]=v;
      dist[nv]=dist[v]+1;
      que.push(nv);
    }
  }
  cout<<"Yes"<<endl;
  for(int i=1;i<n;i++){
    cout<<++houkou[i]<<endl;
  }
  
}