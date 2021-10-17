#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using Graph = vector<vector<int> >;

int main() {
  int a,b;
  cin>>a>>b;
  if(a<=b&&b<=6*a){
    cout<<"Yes"<<endl;
  }else{
    cout<<"No"<<endl;
  }

  
  return 0;
}