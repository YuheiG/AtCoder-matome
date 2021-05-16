#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t n,A,sum=0,waru=pow(10,9)+7,ans=0;
  vector<int64_t> a,wa;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>A;
    a.push_back(A);
  }
  for(int i=n-1;i>0;i--){
      sum+=a.at(i);
      sum%=waru;
      wa.push_back(sum);
  }
  for(int i=0;i<n-1;i++){
    ans+=a.at(i)*wa.at(n-2-i);
    ans%=waru;
  }
  cout<<ans<<endl;
}