#include <bits/stdc++.h>
using namespace std;

int main(){
  int x,y,z,i;
  cin>>x>>y>>z;
  
  for(i=0;i*x<y*z;i++);
  i--;
  
  cout<<i<<endl;
}