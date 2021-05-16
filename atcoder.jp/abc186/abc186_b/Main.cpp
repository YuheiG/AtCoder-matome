#include <bits/stdc++.h>
using namespace std;

int main(){
  int h,w,mina=1000,ans=0;
  int a[100][100];
  cin>>h>>w;
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      cin>>a[i][j];
      mina=min(mina,a[i][j]);
    }
  }
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      ans+=a[i][j]-mina;
    }
  }
  cout<<ans<<endl;
}
  