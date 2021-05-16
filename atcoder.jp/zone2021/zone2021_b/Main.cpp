#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  double ans=0.0;
  double D,H,d,h;
  cin>>n>>D>>H;
  for(int i=0;i<n;i++){
    cin>>d>>h;
    ans=max(ans,(-1.0*(H-h)*d/(D-d))+h);
  }
  cout<<fixed<<setprecision(15)<<ans<<endl;
}

  