#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,b,ans=0;
  cin>>a>>b;
  for(int i=1;i<=b/2;i++){
    int j=a/i;
    while(j*i<a)j++;
    //cout<<"i="<<i<<" "<<j*i<<" "<<(j+1)*i<<endl;
    if(j*i>=a&&(j+1)*i<=b){
      ans=i;
    }
    
  }
  cout<<ans<<endl;
}