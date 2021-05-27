#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using Graph = vector<vector<int> >;

int main(){
  int a,b,k;
  cin>>k>>a>>b;
  for(int i=1;i*k<=b;i++){
    if(i*k>=a){
    cout<<"OK"<<endl;
    return 0;
    }
  }
  cout<<"NG"<<endl;
}