#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t n,a1;
  int64_t ans=0;
  cin>>n;
  vector<int64_t> a;
  for(int i=0;i<n;i++){
    cin>>a1;
    a.push_back(a1);
  }
  sort(a.begin(),a.end());
  reverse(a.begin(),a.end());
  for(int i=0;i<n;i++){
 //   cout<<a[i]<<endl;
    ans+=a[i]*(n-1-i);
    ans-=a[i]*i;
  }
  cout<<ans<<endl;
}