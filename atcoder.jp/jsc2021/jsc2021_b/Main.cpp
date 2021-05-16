#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin>>n>>m;
  int a[10000],a1;
  for(int i=0;i<10000;i++)a[i]=0;
  for(int i=0;i<n+m;i++){
    cin>>a1;
    a[a1]++;
  }
  for(int i=0;i<10000;i++){
    if(a[i]==1){
      cout<<i<<" ";
    }
  }
  cout<<endl;
}