#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main(){
  int64_t n,pat,c;
  int64_t ans=pow(10,10);
  string s,s1;
  cin>>n>>s;
  if(s=="1"){
    cout<<ans*2<<endl;
    return 0;
  }
  if(s=="0"){
    cout<<ans<<endl;
    return 0;
  }
  s1="110";
  if(s.at(0)=='1'&&s.at(1)=='0')s='1'+s;
  if(s.at(0)=='0'&&s.at(1)=='1')s="11"+s;
  if(s.at(s.size()-2)=='1'&&s.at(s.size()-1)=='1')s=s+'0';
  if(s.at(s.size()-2)=='0'&&s.at(s.size()-1)=='1')s=s+"10";
  c=s.size()/3;
  for(int i=0;i<c-1;i++){
    s1+="110";
  }
 // cout<<s<<endl;
 // cout<<s1<<endl;
  if(s==s1){
    cout<<ans-c+1<<endl;
  }else{
    cout<<0<<endl;
  }
}