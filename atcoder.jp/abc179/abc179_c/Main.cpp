#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t n,ans=0,a,b;
  cin>>n;
  int i=1,j=1;
  for(i=1;i<n;i++){
    if(n%i==0){
      ans+=-1+n/i;
    }else{
      ans+=n/i;
    }
  }
  cout<<ans<<endl;
}