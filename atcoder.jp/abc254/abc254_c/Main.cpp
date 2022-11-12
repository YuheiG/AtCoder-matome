#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;


int main() {
  int n,k;
  cin>>n>>k;
  vector<vector<ll>> aList(k);
  vector<int> expect;

  rep(i,n){
    int a;
    cin>>a;
    expect.push_back(a);
    aList.at(i%k).push_back(a);
  }
  sort(expect.begin(),expect.end());
  rep(i,k){
    sort(aList.at(i).begin(),aList.at(i).end());
  }
/*
  rep(i,n){
    cout<<expect.at(i)<<" ";
  }
  cout<<endl;

  rep(i,k){
    rep(j,aList.at(i).size()){
      cout<<aList.at(i).at(j)<<" ";
    }
    cout<<endl;
  }
  */

  rep(i,n){
    if(expect.at(i)!=aList.at(i%k).at(i/k)){
      cout<<"No"<<endl;
      return 0;
    }
  }
  cout<<"Yes"<<endl;
  return 0;   
  }
