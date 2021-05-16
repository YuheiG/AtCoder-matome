#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main(){
  int dp[3][101];
  int a,b,x,y,ans;
  cin>>a>>b>>x>>y;
  dp[1][b]=0;
  if(a>b){
    for(int i=b;i<a;i++){
      if(i==b){
      dp[0][b+1]=x+dp[1][b];
      dp[1][b+1]=min(x+dp[0][b+1],y+dp[1][b]);
      }else{
      dp[0][i+1]=min(y+dp[0][i],x+dp[1][i]);
      dp[1][i+1]=min(y+dp[1][i],x+dp[0][i+1]);
      }
    }
    
 //   for(int i=a;i>=b;i--){
 //    cout<<dp[0][i]<<"  "<<dp[1][i]<<endl;
 //   }
 //   cout<<dp[0][a]<<endl;
    
    
  }else{
    for(int i=b;i>a;i--){
      if(i==b){
      dp[0][b]=x+dp[1][b];
      dp[1][b-1]=min(y+dp[1][b],x+dp[0][b]);
      }else{
      dp[0][i]=min(y+dp[0][i+1],x+dp[1][i]);
      dp[1][i-1]=min(y+dp[1][i],x+dp[0][i]);
      }
    }
    
    dp[0][a]=min(x+dp[1][a],y+dp[0][a+1]);
  //  for(int i=b;i>=a;i--){
 //     cout<<dp[0][i]<<"  "<<dp[1][i]<<endl;
 //   }
  }
  cout<<dp[0][a]<<endl;
}