#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int> >;

int main(){  
  
  int a,b,ans;
  cin>>a>>b;
  ans=b-a+1;
  if(ans<0){
    cout<<0<<endl;
  }else{
    cout<<ans<<endl;
  }
  
  return 0;
}