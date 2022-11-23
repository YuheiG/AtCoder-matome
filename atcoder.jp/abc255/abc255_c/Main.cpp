#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  ll  x,a,d,n;
  cin>>x>>a>>d>>n;
  if(d<0){
    a*=-1;
    d*=-1;
    x*=-1;
  }
  if(x<=a){
    cout<<a-x<<endl;
    return 0;
  }
  if(x>=(a+d*(n-1))){
    cout<<x-(a+d*(n-1))<<endl;
    return 0;
  }
  x-=a;
  ll check=x%d;
  cout<<min(check,d-check)<<endl;
  

}
