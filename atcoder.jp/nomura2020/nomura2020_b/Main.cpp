#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  int n;
  cin>>s;
  n=s.size();
  for(int i=0;i<n;i++)if(s.at(i)=='?')s.at(i)='D';
  cout<<s<<endl;
  
}