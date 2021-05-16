#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main(){
  int n;
  int h[100000],dp[100000],dp1,dp2;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>h[i];
    dp[i]=INT_MAX;
  }
  dp[0]=0;
  dp[1]=abs(h[0]-h[1]);
  for(int i=2;i<n;i++){
    dp1=dp[i-1]+abs(h[i]-h[i-1]);
    dp2=dp[i-2]+abs(h[i]-h[i-2]);
    dp[i]=min(dp1,dp2);
  }
  cout<<dp[n-1]<<endl;
}