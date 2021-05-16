#include <bits/stdc++.h>
using namespace std;

int main(){
  string s,t;
  int maxx=0,co;
  cin>>s>>t;
  for(int i=0;i<s.size()-t.size()+1;i++){
    co=0;
    for(int j=0;j<t.size();j++){
      if(s.at(i+j)==t.at(j))co++;
    }
    maxx=max(maxx,co);
  }
  cout<<t.size()-maxx<<endl;
}