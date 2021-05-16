#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  int x,v,p,al=0;
  cin>>n>>x;
  x*=100;
  for(int i=0;i<n;i++){
    cin>>v>>p;
    al+=v*p;
    if(al>x){
      cout<<i+1<<endl;
      return 0; 
    }
  }
  cout<<"-1"<<endl;
}
