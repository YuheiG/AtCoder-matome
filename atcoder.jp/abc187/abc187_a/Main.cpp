#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,b,asum,bsum;
  cin>>a>>b;
  asum=a/100;
  asum+=(a%100)/10;
  asum+=(a%100)%10;
  bsum=b/100;
  bsum+=(b%100)/10;
  bsum+=(b%100)%10;
  cout<<max(asum,bsum)<<endl;
}