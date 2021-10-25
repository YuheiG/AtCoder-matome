#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int> >;

int main(){
  int n;
  string s;
  cin>>n>>s;
  rep(i,n){
    if(s.at(i)=='1'){
      if(i%2==0){
        cout<<"Takahashi"<<endl;
      }else{
        cout<<"Aoki"<<endl;
      }
      return 0;
    }
  }
  return 0;
}

