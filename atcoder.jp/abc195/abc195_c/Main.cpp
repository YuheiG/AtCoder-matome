#include <bits/stdc++.h>
using namespace std;

int main(){
  long long n,ans=0;
  cin>>n;
  if(n>=1000){ans+=n-999;}
  if(n>=1000000){ans+=n-999999;}
  if(n>=1000000000){ans+=n-999999999;}
  if(n>=1000000000000){ans+=n-999999999999;}
  if(n>=1000000000000000){ans+=n-999999999999999;}
  cout<<ans<<endl;
}
  