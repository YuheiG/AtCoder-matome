#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main(){
  int64_t t,l,r,k,ans;
  cin>>t;
  for(int i=0;i<t;i++){
    cin>>l>>r;
    k=r-l*2+1;
    ans=k*(k+1)/2;
    if(k>0){
      cout<<ans<<endl;
    }else{
      cout<<0<<endl;
    }
  }
}
  