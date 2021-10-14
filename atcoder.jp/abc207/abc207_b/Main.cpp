#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using Graph = vector<vector<int> >;

int main() {
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  long long mizu=a,red=0,count=0;
  
  if(d*c-b<=0){
    cout<<-1<<endl;
    return 0;
  }
  while(true){
    if(mizu<=red*d){
      cout<<count<<endl;
      return 0;
    }
    count++;
    mizu+=b;
    red+=c;
  }
  
  return 0;
}