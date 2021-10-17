#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int> >;

int main(){
  int n,m;
  cin>>n>>m;
  ll dist[401][401];
  ll ans=0,inf=LLONG_MAX;
  rep(i,n){
    rep(j,n){
      if(i==j){
        dist[i][j]=0;
      }else{
        dist[i][j]=inf;
      }
    }
  }
  rep(i,m){
    int a,b,c;
    cin>>a>>b>>c;
    a--;
    b--;
    dist[a][b]=c;
  }
  rep(k,n){
    rep(s,n){
      rep(t,n){
        if(dist[s][k]!=inf&&dist[k][t]!=inf){
          dist[s][t]=min(dist[s][t],dist[s][k]+dist[k][t]);
        }    
      }
    }
    rep(s,n){
      rep(t,n){
        if(dist[s][t]<inf){
          ans+=dist[s][t];
        }
      }
    }  
  }
  cout<<ans<<endl;
  return 0;
}



