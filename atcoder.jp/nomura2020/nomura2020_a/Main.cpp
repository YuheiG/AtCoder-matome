#include <bits/stdc++.h>
using namespace std;

int main(){
  int s,e,h1,h2,m1,m2,k,ans;
  cin>>h1>>m1>>h2>>m2>>k;
  s=h1*60+m1;
  e=h2*60+m2;
  ans=e-s-k;
  cout<<ans<<endl;
  
}
  