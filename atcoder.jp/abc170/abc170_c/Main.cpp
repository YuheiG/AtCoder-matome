#include <bits/stdc++.h>
using namespace std;

int main(){
  int x,n,P;
  bitset<101> p;
  cin>>x>>n;
  for(int i=0;i<n;i++){
    cin>>P;
    p.set(P);
  }
  if(!p.test(x)){
    cout<<x<<endl;
    return 0;
  }
  for(int i=1;i<1000;i++){
    if(x-i<=0){
      cout<<x-i<<endl;
      return 0;
    }
    if(!p.test(x-i)){
      cout<<x-i<<endl;
      return 0;
    }
    if(x+i>100){
      cout<<x+i<<endl;
      return 0;
    }
    if(!p.test(x+i)){
      cout<<x+i<<endl;
      return 0;
    }
  
    
  }
}