#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t A,P,X,ans=10000000000;
  int n,kanou=-1;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>A>>P>>X;;
    if(X-A>0){
      ans=min(ans,P);
      kanou=1;
    }
  }
  if(kanou==1){
    cout<<ans<<endl;
  }else{
    cout<<kanou<<endl;
  }
}