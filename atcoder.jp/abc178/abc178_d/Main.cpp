#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t dp[2002],waru=pow(10,9)+7;
  int s;
  cin>>s;
  dp[3]=1;
  dp[4]=1;
  dp[5]=1;
  for(int i=6;i<=s;i++){
    dp[i]=1;
    for(int j=3;j<=i-3;j++){
      dp[i]+=dp[j];
      dp[i]%=waru;
    }
  }
  cout<<dp[s]<<endl;
  
}