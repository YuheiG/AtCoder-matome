#include <bits/stdc++.h>
using namespace std;

int main(){
  int ans;
  string wi;
  cin>>wi;
  if(wi=="SSS")ans=0;
  if(wi=="RRR")ans=3;
  if(wi=="RRS")ans=2;
  if(wi=="SSR")ans=1;
  if(wi=="SRR")ans=2;
  if(wi=="RSS")ans=1;
  if(wi=="SRS")ans=1;
  if(wi=="RSR")ans=1;
  cout<<ans<<endl;
  
}