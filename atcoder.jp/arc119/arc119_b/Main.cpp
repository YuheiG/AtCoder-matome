#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int> >;
  
int main(){
  int n,ns=0,nt=0,ans=0;
  vector<int> nums,numt;
  cin>>n;
  bitset<500001> s,t;
  cin>>s>>t;
  if(s.count()!=t.count()){
    cout<<-1<<endl;
    return 0;
  }
  for(int i=0;i<n;i++){
    if(s.test(i)){
      nums.push_back(-1);
    }else{
      nums.push_back(ns);
      ns++;
    }
    if(t.test(i)){
      numt.push_back(-1);
    }else{
      numt.push_back(nt);
      nt++;
    }
  }
  
  for(int i=0;i<n;i++){
    if(nums.at(i)==-1)continue;
    if(nums.at(i)!=numt.at(i))ans++;
  }
  cout<<ans<<endl;
}