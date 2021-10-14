#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using Graph = vector<vector<int> >;

int main() {
  int a,b,c;
  vector<int> sum(3);
  cin>>a>>b>>c;
  sum.at(0)=a+b;
  sum.at(1)=b+c;
  sum.at(2)=c+a;
  sort(sum.begin(),sum.end());
  cout<<sum.at(2)<<endl;
  
  return 0;
}