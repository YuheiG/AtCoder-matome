#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,ans=0,c=0;
  int x[1000],y[1000];
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>x[i]>>y[i];
  }
  //cout<<x[1]<<" "<<y[1]<<endl;
  for(int i=0;i<n;i++){
    for(int j=0;j<n&&i>j;j++){
      if(abs(x[i]-x[j])>=abs(y[i]-y[j]))ans++;
    }
  }
  cout<<ans<<endl;
}