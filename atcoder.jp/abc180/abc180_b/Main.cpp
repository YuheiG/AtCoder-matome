#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  long long int x,man=0,pu=0,che=0;
  long double ans_p;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>x;
    x=abs(x);
    man+=x;
    pu+=x*x;
    che=max(che,x);
  }
  ans_p=sqrt(pu);
  cout<<man<<endl;
  cout<<fixed<<setprecision(15)<<ans_p<<endl;
  cout<<fixed<<setprecision(0)<<che<<endl;
}