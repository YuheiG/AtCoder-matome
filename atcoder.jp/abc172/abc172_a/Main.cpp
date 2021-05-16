#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,ans=0;
  cin>>a;
  for(int i=1;i<4;i++)ans+=pow(a,i);
  cout<<ans<<endl;
}
  