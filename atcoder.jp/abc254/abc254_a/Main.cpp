#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  int n;
  cin>>n;
  int ans=n%100;
  if(ans<10){
    cout<<0;
  }
  cout<<ans<<endl;

  return 0;   
  }
