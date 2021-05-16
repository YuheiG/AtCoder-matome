#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,bs,nbs;

  cin>>n;
  vector<string> s(n);
  for(string& str_f:s)cin>>str_f;
  unordered_set<string> h(s.begin(),s.end());
  for(string& str : s)if(h.count('!'+str)){
    cout<<str<<endl;
    return 0;
  }
  cout<<"satisfiable"<<endl;
}