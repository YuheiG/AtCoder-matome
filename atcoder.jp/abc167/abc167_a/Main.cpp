#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using Graph = vector<vector<int> >;

int main(){
  string s,t;
  cin>>s>>t;
  t.erase(t.size()-1,1);
  if(t==s){
    cout<<"Yes"<<endl;
  }else{
    cout<<"No"<<endl;
    
  }
  
}