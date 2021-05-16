#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t n,a,ans=0,waru=pow(10,9)+7;
  vector<int> A;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a;
    A.push_back(a);
  }
  sort(A.begin(),A.end());
  reverse(A.begin(),A.end());
  ans=1;
  for(int i=0;i<n-1;i++){
    ans+=ans*(A.at(i)-A.at(i+1));
    ans%=waru;
  }
  ans+=ans*A.at(n-1);
  ans%=waru;
  cout<<ans<<endl;

}