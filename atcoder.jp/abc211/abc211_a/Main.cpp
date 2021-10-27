#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int> >;

int main(){
  int a,b;
  double c;
  cin>>a>>b;
  c=(a-b)*1.0/3.0+b;
  cout<<fixed<<setprecision(7)<<c<<endl;
  return 0;
}