#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using Graph = vector<vector<int> >;


int main() {
  int n;
  bool dp[110][100000];
  long long sumT,tagT;
  vector<int> t(110);
  
  sumT=0;
  
  cin>>n;
  rep(i,n){
    cin>>t.at(i);
    sumT+=t.at(i);
  }
  if(sumT%2==1){
    tagT=1+sumT/2;
  }else{
    tagT=sumT/2;
  }
//  cout<<tagT<<endl;
  
  dp[0][t.at(0)]=true;
  for(int tagTi=0;tagTi<100000;tagTi++){
    /*rep(i,n){
      if(tagTi!=0){cout<<dp[i][tagTi-1]<<" ";}
    }
    cout<<endl;*/
    if(tagTi==0){
      rep(i,n){dp[i][tagTi]=true;}
      continue;
    }
    rep(i,n){
      if(i!=0&&dp[i-1][tagTi]){
        dp[i][tagTi]=true;
        continue;
      }
      if(i!=0&&tagTi-t.at(i)>=0){dp[i][tagTi]=dp[i-1][tagTi-t.at(i)];}
    }
    if(tagTi>=tagT&&dp[n-1][tagTi]){
      cout<<tagTi<<endl;
      break;
    }
  }
  
  return 0;
  
}