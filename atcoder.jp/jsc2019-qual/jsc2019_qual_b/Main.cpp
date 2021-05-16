#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main(){
  int64_t n,k,kei;
  int64_t ans=0,ansi,ten_n,ooki_n;
  int64_t waru=pow(10,9)+7;
  int a[2001];
  cin>>n>>k;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int i=0;i<n;i++){
    ten_n=0;
    ooki_n=0;
    for(int j=0;j<n;j++){
      if(a[i]>a[j])ooki_n++;
      if(a[i]>a[j]&&i<j)ten_n++;
    }
  // cout<<"i="<<i<<" ten="<<ten_n<<" ooki_n="<<ooki_n<<endl;
    kei=k*(k-1)/2;
    kei%=waru;
    ans+=ten_n*k+ooki_n*kei;
    ans%=waru;
  }
  cout<<ans<<endl;
}