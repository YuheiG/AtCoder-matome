#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t waru=pow(10,9)+7;
  int64_t ans18=1,ans09=1,ans9=1,ans;
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    ans18*=8;
    ans9*=9;
    ans09*=10;
    ans18%=waru;
    ans09%=waru;
    ans9%=waru;
  }
  ans9=ans09-ans9;
  if(ans9<0)ans9+=waru;
  ans9%=waru;
  ans=ans9*2+ans18-ans09;
  if(ans<0)ans+=waru;
  ans%=waru;
  cout<<ans<<endl;
}
  