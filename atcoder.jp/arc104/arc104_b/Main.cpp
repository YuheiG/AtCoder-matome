#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main(){
  int n,a,t,g,c,ans=0;
  string s;
  cin>>n>>s;
  for(int i=0;i<n;i++){
    a=0;
    t=0;
    g=0;
    c=0;
    for(int k=i;k<n;k++){
      if(s.at(k)=='A')a++;
      if(s.at(k)=='T')t++;
      if(s.at(k)=='G')g++;
      if(s.at(k)=='C')c++;
      if(a==t&&g==c)ans++;
    }
  }
  cout<<ans<<endl;
}
  
  