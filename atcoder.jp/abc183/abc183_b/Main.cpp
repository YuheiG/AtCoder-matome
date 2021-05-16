#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main(){
  double sx,sy,gx,gy;
  cin>>sx>>sy>>gx>>gy;
  double a,ans;
  a=(-1.0)*(gy+sy)/(gx-sx);
  ans=((-1.0)*sy+a*sx)/a;
  cout<<fixed<<setprecision(8)<<ans<<endl;
}