#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  int ans=0;
  cin>>s;
  for(int i=0;i<s.size()-3;i++){
    if(s.at(i)=='Z'&&s.at(i+1)=='O'&&s.at(i+2)=='N'&&s.at(i+3)=='e')ans++;
  }
  cout<<ans<<endl;
}