#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main(){
  double d,x,y;
  int n,r;
  cin>>r>>x>>y;

  d=sqrt(x*x+y*y);
  if(d<r){
    cout<<2<<endl;
    return 0;
  }
  
  int i;
  for(i=0;i<d/r;i++);   
  cout<<i<<endl;
  
}