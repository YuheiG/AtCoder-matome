#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main(){
  int n,x,ans;
  string s;
  cin>>n>>x>>s;
  ans=x;
  for(int i=0;i<n;i++){
    if(s.at(i)=='o'){
      ans++;
    }else{
      ans--;
    }
    if(ans<0)ans=0;
  }
  cout<<ans<<endl;
}