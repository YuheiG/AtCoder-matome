#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int> >;

int main(){  
  int h,w;
  cin>>h>>w;
  ll a[51][51];
  
  rep(i,h){
    rep(j,w){
      cin>>a[i][j];
    }
  }
  rep(i,h-1){
    rep(j,w-1){
      for(int k=i+1;k<h;k++){
        for(int l=j+1;l<w;l++){
          if(a[i][j]+a[k][l]>a[k][j]+a[i][l]){
            cout<<"No"<<endl;
            return 0;
          }          
        }
      }
    }
  }
  cout<<"Yes"<<endl;
  return 0;
  
  
}