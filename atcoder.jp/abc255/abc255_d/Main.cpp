#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  ll n,q;
  cin>>n>>q;
  if(n==1){
    ll a;
    cin>>a;
    rep(i,q){
      ll x;
      cin>>x;
      cout<<abs(x-a)<<endl;
    }
    return 0;
  }

  
  vector<ll> upList,downList,a;
  rep(i,n){
    ll A;
    cin>>A;
    a.push_back(A);
  }
  sort(a.begin(),a.end());

  rep(i,n-1){
    ll addUp=(a.at(i+1)-a.at(i))*(i+1);
    ll addDown=(a.at((n-i-1))-a.at(n-i-2))*(i+1);
    if(i==0){
      upList.push_back(addUp);
      downList.push_back(addDown);
    }else{
      upList.push_back(upList.at(i-1)+addUp);
      downList.push_back(downList.at(i-1)+addDown);
    }
  } 

  rep(i,q){
    ll x;
    cin>>x;
    ll ans=0;

    if(x<=a.at(0)){
      ans+=downList.at(n-2)+(a.at(0)-x)*n;
      cout<<ans<<endl;
      continue;
    }
    if(x>=a.at(n-1)){
      ans+=upList.at(n-2)+(x-a.at(n-1))*n;
      cout<<ans<<endl;
      continue;
    }

    ll right=n-1;
    ll left=0;
    while(right-left!=1){
      ll check=(right+left)/2;
      if(a.at(check)>x){
        right=check;
      }else if(a.at(check)<x){ 
        left=check;
      }else if(a.at(check)==x){
        left=check;
        right=check;
        break;
      }
    }

    if(left!=0){
      ans+=upList.at(left-1);
    }
    if(right!=n-1){
      ans+=downList.at((n-2-right));
    }
    ans+=(x-a.at(left))*(left+1);
    ans+=(a.at(right)-x)*(n-right);
    cout<<ans<<endl;
  }


}
