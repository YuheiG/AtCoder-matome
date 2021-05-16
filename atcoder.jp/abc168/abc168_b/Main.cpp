#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  int k,n;
  cin>>k>>s;
  n=s.size();
  if(n>k){
    s.erase(k,n-k);
    cout<<s<<"..."<<endl;
  }else{
    cout<<s<<endl;
  }
}