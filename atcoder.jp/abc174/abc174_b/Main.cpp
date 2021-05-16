#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,ans=0;
  int64_t d,x,y;
  cin>>n>>d;
  d=d*d;
  for(int i=0;i<n;i++){
    cin>>x>>y;
    if(d>=x*x+y*y)ans++;
  }
  cout<<ans<<endl;
}