#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using Graph = vector<vector<int> >;

int main() {
  long long n,a;
  vector<long long> A;
  cin>>n;
  rep(i,n){
    cin>>a;
    A.push_back(a);

  }
  sort(A.begin(),A.end());
  
  long long kbr=1;
  long long ans=0;
  rep(i,n-1){
    if(A.at(i)==A.at(i+1)){
      kbr++;
      continue;
    }
    ans+=kbr*(n-i-1);
    kbr=1; 
  }
  cout<<ans<<endl;
  return 0;
  
}