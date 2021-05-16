#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,a,ans=0;
  cin>>n;
  for(int i=1;i<n+1;i++){
    cin>>a;
    if(a%2==1&&i%2==1)ans++;
  }
  cout<<ans<<endl;
}
