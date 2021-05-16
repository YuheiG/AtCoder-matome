#include <bits/stdc++.h>
using namespace std;

int main(){
  string s,t;
  int n,ans=0;;
  cin>>s>>t;
  n=s.size();
  for(int i=0;i<n;i++)if(s.at(i)!=t.at(i))ans++;
  cout<<ans<<endl;
}