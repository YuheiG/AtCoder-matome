#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t A,wa=0,ans=1,waru=998244353;
  vector<int64_t> a(3);
  cin>>a.at(0)>>a.at(1)>>a.at(2);
  for(int i=0;i<3;i++){ 
    if(a.at(i)%2==0){
      A=a.at(i)/2;
      A%=waru;
      A*=a.at(i)+1;
      A%=waru;
    }else{
      A=(a.at(i)+1)/2;
      A%=waru;
      A*=a.at(i);
      A%=waru;
    }
    ans*=A;
    ans%=waru;
  }
    
  cout<<ans<<endl;
}