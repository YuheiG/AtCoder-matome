#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using Graph = vector<vector<int> >;


int main() {
  bitset<100000> cck;
  int n,a;
  cin>>n;
  rep(i,n){
    cin>>a;
    a--;
    if(cck.test(a)){
      cout<<"No"<<endl;
      return 0;
    }
    cck.set(a,1);
    
  }
  cout<<"Yes"<<endl;
  return 0;
  
}