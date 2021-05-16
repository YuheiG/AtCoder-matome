#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t n,t,pmin,amin,c;
  cin>>t>>n;
  amin=(n/t)*100;
  pmin=(n/t)*(100+t);
  c=n-(n/t)*t;
  //cout<<amin<<" "<<pmin<<" "<<c<<endl;
  if(n%t==0){
    cout<<--pmin<<endl;
    return 0;
  }
  for(int64_t i=amin+1;i<amin+101;i++){
    pmin++;
 //   cout<<pmin<<" "<<(100+t)*i/100<<endl;
    if(pmin==(100+t)*i/100)continue;
    c--;
    if(c==0)break;
    pmin++;
  }
  cout<<pmin<<endl;  
}