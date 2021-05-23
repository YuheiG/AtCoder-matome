#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using Graph = vector<vector<int> >;

int main(){
  int masu[501][501];
  int h,w;
  string s;
  cin>>h>>w;
  rep(i,h){
    cin>>s;
    rep(j,w){
      if(s.at(j)=='R'){
        masu[i][j]=1;
      }else if(s.at(j)=='B'){
        masu[i][j]=-1;
      }else{
        masu[i][j]=0;
      }
    }
  }
  bitset<10000> naname;
  for(int i=0;i<h+w;i++){
    int c=2;
    for(int j=0;j<=i;j++){
      if(i-j>=h||j>=w)continue;
      //int test=i-j;
     // cout<<masu[i-j][j]<<"("<<test<<","<<j<<") ";
      if(masu[i-j][j]==0)continue;
      if(c==2){
        c=masu[i-j][j];
        naname.set(i);
        continue;
      }
      if(c!=masu[i-j][j]){
        cout<<0<<endl;
        return 0;
      }     
    }
  }
  int free;
  int64_t waruyo=998244353;
  free=h+w-1-naname.count();
  int64_t ans=1;
  rep(i,free){
    ans*=2;
    ans%=waruyo;
  }
  cout<<ans<<endl;
}
