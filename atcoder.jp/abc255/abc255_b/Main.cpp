#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  int n,k;
  cin>>n>>k;
  vector<ll> nomal,light;
  set<ll> a;
  rep(i,k){
    ll A;
    cin>>A;
    A--;
    a.insert(A);
  }
  rep(i,n){
    if(a.find(i)==a.end()){
      nomal.push_back(i);
    }else{
      light.push_back(i);
    }
  }


  vector<ll> x,y;
  rep(i,n){
    ll X,Y;
    cin>>X>>Y;
    x.push_back(X);
    y.push_back(Y);
  }

  int nomalSize=nomal.size();
  int lightSize=light.size();
  double ans=-1;
  //cout<<nomalSize<<"-"<<lightSize<<endl;

  rep(i,nomalSize){
    double dist=10000000;
    rep(j,lightSize){
      ll dx=x.at(nomal.at(i))-x.at(light.at(j));
      ll dy=y.at(nomal.at(i))-y.at(light.at(j));
      //cout<<dx<<" "<<dy<<endl;
      dist=min(dist,sqrt((dx*dx+dy*dy)*1.0));
    }
    ans=max(ans,dist);

  }
  cout<<std::fixed<<std::setprecision(8)<<ans<<endl;


}
