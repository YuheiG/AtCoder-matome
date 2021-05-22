#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using Graph = vector<vector<int> >;

int main(){
  vector<int> a,b,c(100000);
  int n,x;
  cin>>n;
  rep(i,n){
    cin>>x;
    a.push_back(x);
  }
  rep(i,n){
    cin>>x;
    b.push_back(x);
  }
  rep(i,n){
    cin>>x;
    x--;
    c.at(x)++;
  }
  
  map<int,int64_t> bc;
  rep(i,n){
    if(bc.find(b.at(i))!=bc.end()){
      int ck=bc.at(b.at(i))+c.at(i);
      bc.insert_or_assign(b.at(i),ck);
    }else{
      bc.insert(make_pair(b.at(i),c.at(i)));
    }
  }
  int64_t ans=0;
  rep(i,n){
    if(bc.find(a.at(i))!=bc.end()){
      ans+=bc.at(a.at(i));
    }
  }
  cout<<ans<<endl;
  
  
}