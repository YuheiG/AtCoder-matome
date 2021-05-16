#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  int64_t a,b,ans=0;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a>>b;
    ans+=(b*(b+1)/2)-a*(a-1)/2;
  }
  cout<<ans<<endl;
    
}