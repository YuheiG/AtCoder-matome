#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,ans=0,iroc;
  string s;
  cin>>n>>s;
  bitset<2000002> iro;
  for(int i=0;i<n;i++){
    if(s.at(i)=='W')iro.set(i);
  }
  iroc=iro.count();
  for(int i=0;i<iroc;i++){
    if(!iro.test(n-i-1))ans++;
  }
 // cout<<iro<<endl;
  cout<<ans<<endl;
 
}