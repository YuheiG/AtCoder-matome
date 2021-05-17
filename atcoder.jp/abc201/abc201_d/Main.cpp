#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int> >;

int H,W;
bool masu[2001][2001];
bool seen[2001][2001];
int tokuten[2001][2001];
int dp(int h,int w){
  int ans;
  if(seen[h][w])return tokuten[h][w];
  
  if(h==H-1){
    int c=-1;
    if(masu[h][1+w])c=1;
    ans=c-1*dp(h,1+w);
  }else if(w==W-1){
    int c=-1;
    if(masu[1+h][w])c=1;
    ans=c-1*dp(1+h,w);
  }else{
    int a=-1,b=-1;
    if(masu[1+h][w])a=1;
    if(masu[h][1+w])b=1;
    ans=max(a-1*dp(1+h,w),b-1*dp(h,1+w));
  }
  seen[h][w]=true;
  tokuten[h][w]=ans;
 // cout<<"("<<h<<","<<w<<")="<<ans<<" "<<endl;
  return ans;
  
}

int main(){
  cin>>H>>W;
  char A;
  int ans;
  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      cin>>A;
      if(A=='+'){
        masu[i][j]=true;
      }else{
        masu[i][j]=false;
      }
    }
  }
  tokuten[H-1][W-1]=0;
  seen[H-1][W-1]=true;
  ans=dp(0,0);
 /* for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      cout<<tokuten[i][j]<<" ";
    }
    cout<<endl;
  }
  */
  
  if(ans>0){
    cout<<"Takahashi"<<endl;
  }else if(ans==0){
    cout<<"Draw"<<endl;
  }else{
    cout<<"Aoki"<<endl;
  }
  
}