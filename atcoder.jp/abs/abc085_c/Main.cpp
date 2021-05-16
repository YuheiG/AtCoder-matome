#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,y,a,b,c,ans=1;
  cin>>n>>y;
  for(int a=0;a<=n&&ans==1;a++){
    for(int b=0;b<=n-a&&ans==1;b++){
      c=n-a-b;
      if(10000*a+5000*b+1000*c==y){
        cout<<a<<" "<<b<<" "<<c<<endl;
        ans=0;
      }
    }
  } 
  if(ans==1){
    cout<<"-1 -1 -1"<<endl;
  }
}