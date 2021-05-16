#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main(){
  int n;
  int64_t ans=1,ansk;
  cin>>n;
  ans=1;
  
  for(int i=2;i<=n;i++){
    ansk=ans;
    while(ans%i!=0)ans+=ansk;
  }
  ans++;

/*  cout<<"j="<<j<<" ";
  if(ans<pow(10,13)){
    cout<<"Yes  ";
  }else{
    cout<<"No  ";
  }
  for(int i=2;i<=n;i++){
    cout<<ans%i;
  }
  cout<<endl;*/

  cout<<ans<<endl;
}
  
  