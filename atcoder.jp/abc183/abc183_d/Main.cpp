#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main(){
  int n,w,s,t,p;
  int64_t ryou=0;
  vector<pair<int,int>> event;
  pair<int,int> pa;
  cin>>n>>w;
  for(int i=0;i<n;i++){
    cin>>s>>t>>p;
    event.push_back(make_pair(s,p));
    event.push_back(make_pair(t,-1*p));
  }
  sort(event.begin(),event.end());
//  for(int i=0;i<2*n;i++){
//  cout<<event.at(i).first<<" "<<event.at(i).second<<endl;
//  }
  for(int i=0;i<2*n;i++){
    ryou+=event.at(i).second;
    if(ryou>w){
      cout<<"No"<<endl;
      return 0;
    }
  }
  cout<<"Yes"<<endl;
}