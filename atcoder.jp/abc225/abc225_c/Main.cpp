#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int> >;

int main(){

	ll n,m;
  cin>>n>>m;
  	vector<vector<ll>> x(n,vector<ll>(m)),y(n,vector<ll>(m));

	rep(i,n){
		rep(j,m){
			int b;
          cin>>b;
          y.at(i).at(j)=(b+6)/7;
          x.at(i).at(j)=(b-1)%7+1;
		}
	}
  string ans="Yes";
  rep(i,n){
    rep(j,m){
      if(j>0&&x.at(i).at(j)!=x.at(i).at(j-1)+1)ans="No";
      if(i>0&&y.at(i).at(j)!=y.at(i-1).at(j)+1)ans="No";
      if(j>0&&y.at(i).at(j)!=y.at(i).at(j-1))ans="No";
      if(i>0&&x.at(i).at(j)!=x.at(i-1).at(j))ans="No";
    }
  }
  cout<<ans<<endl;
	return 0;
}