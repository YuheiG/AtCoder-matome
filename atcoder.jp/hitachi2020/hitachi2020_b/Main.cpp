#include <bits/stdc++.h>
using namespace std;

int main(){
  int A,B,m,a1,b1,amin=1000000,bmin=1000000;
  vector<int> a,b;
  cin>>A>>B>>m;
  for(int i=0;i<A;i++){
    cin>>a1;
    amin=min(a1,amin);
    a.push_back(a1);
  }
  for(int i=0;i<B;i++){
    cin>>b1;
    bmin=min(b1,bmin);
    b.push_back(b1);
  }
  int x,y,c,ans;
  ans=amin+bmin;
  for(int i=0;i<m;i++){
    cin>>x>>y>>c;
    x--;
    y--;
    ans=min(ans,a.at(x)+b.at(y)-c);
  }
  cout<<ans<<endl;

}