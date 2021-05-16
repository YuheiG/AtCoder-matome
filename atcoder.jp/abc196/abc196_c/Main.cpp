#include <bits/stdc++.h>
using namespace std;

int main(){    
  int64_t x=1,n,m,ans;
  cin>>n;
  m=n;
  std::stringstream ss;
  ss<<n;
  std::string N=ss.str();
  for(int i=0;i<N.size()/2;i++){
    x*=10;
  }
  m/=x;
//  cout<<"m="<<m<<" x="<<x<<endl;
  if(N.size()%2==1){
    ans=x-1;
  }else{
    if(m>n%x){
      ans=m-1;
    }else{
      ans=m;
    }
  }
  cout<<ans<<endl;
}
  