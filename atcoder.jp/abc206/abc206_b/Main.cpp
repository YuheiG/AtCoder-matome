#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using Graph = vector<vector<int> >;

int main() {
  int n,day=0;
  long long now=0;
  cin>>n;
  while(true){
    day++;
    now+=day;
    if(now>=n){
      cout<<day<<endl;
      break;
    }
    
  }

  
  return 0;
  
}