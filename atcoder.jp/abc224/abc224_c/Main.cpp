#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int> >;

int main(){  
  int n;
  cin>>n;
  vector<ll> x(n),y(n);
  rep(i,n){
    cin>>x.at(i);
    cin>>y.at(i);
  }
  int ans=n*(n-1)*(n-2)/6;
  rep(i,n){
    for(int j=0;i>j;j++){
      for(int k=0;j>k;k++){
        if((x.at(i)-x.at(j))*(y.at(k)-y.at(j))==
           (x.at(k)-x.at(j))*(y.at(i)-y.at(j))){
          ans--;
        }  
      }
    }
  }
  cout<<ans<<endl;
  return 0;
}
