#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using Graph = vector<vector<int> >;

int main() {
  
  double n;
  int ans;
  
  cin>>n;
  ans=1.08*n;
  
  if(ans>206){
    cout<<":("<<endl;
  }else if(ans<206){
    cout<<"Yay!"<<endl;
  }else if(ans==206){
    cout<<"so-so"<<endl;
  }
  //cout<<ans<<endl;
  
  return 0;
  
}