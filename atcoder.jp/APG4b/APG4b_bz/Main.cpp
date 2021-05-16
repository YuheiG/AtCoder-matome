#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,x,max=0,xmax;
  cin>>n;
  map<int,int> a;
  for(int i=0;i<n;i++){
    cin>>x;
    a[x]++;
    if(max<a[x]){
      max=a[x];
      xmax=x;
    }
  }
  cout<<xmax<<" "<<max<<endl;
}