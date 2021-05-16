#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,a[10001],l,r,x,xmax=0,ansk,ans=0,lr;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
    xmax=max(xmax,a[i]);
  }
  for(int i=1;i<=xmax;i++){
    for(int j=0;j<n;j++){
      if(a[j]>=i){
        ansk=0;
        while(a[j]>=i&&j<n){
          ansk+=i;
          j++;
        }
        //cout<<"ansk="<<ansk<<" i="<<i<<endl;
        ans=max(ans,ansk);
      }
    }
  }
  cout<<ans<<endl;
  
}