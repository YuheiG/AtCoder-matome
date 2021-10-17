#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using Graph = vector<vector<int> >;

int main() {
  vector<long long> fra(20);
  int p,maxi;
  cin>>p;
  fra.at(0)=1;
  for(int i=1;true;i++){
    fra.at(i)=fra.at(i-1)*(i+1);
    if(fra.at(i)>p){
      maxi=i-1;
      break;
    }
  }
  int ans=0;
// cout<<maxi<<" "<<p<<endl;
  for(int i=maxi;p!=0;i--){
    while(p>=fra.at(i)){
      p-=fra.at(i);
      ans++;
    }
  }
  cout<<ans<<endl;
  
  return 0;
}