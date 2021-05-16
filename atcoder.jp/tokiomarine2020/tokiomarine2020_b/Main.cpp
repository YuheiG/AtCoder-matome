#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t a,v,b,w,t,d,vero;
  cin>>a>>v>>b>>w>>t;
  if(w>=v){
    cout<<"NO"<<endl;
    return 0;
  }
  d=abs(a-b);
  vero=v-w;
 // cout<<d<<" "<<vero<<" "<<t<<endl;
  if(t*vero>=d){
    cout<<"YES"<<endl;
  }else{
    cout<<"NO"<<endl;
  }
  
}
  