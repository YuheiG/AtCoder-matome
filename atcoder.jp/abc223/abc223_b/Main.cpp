#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int> >;

int main(){
  string s;
  int size;
  vector<string> str;
  cin>>s;
  str.push_back(s);
  char e;
  rep(i,s.size()-1){
    e=s.at(0);
    s.erase(0,1);
    s.push_back(e);
    str.push_back(s);
  }
  sort(str.begin(),str.end());
  cout<<str.at(0)<<endl;
  cout<<str.at(s.size()-1)<<endl;
 
  
  return 0;
}