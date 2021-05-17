#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int> >;
  
int main(){
  vector<pair<int,string>> mt;
  string name;
  int t,n;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>name>>t;
    mt.push_back(make_pair(t,name));
  }
  sort(mt.begin(),mt.end());
  cout<<mt.at(n-2).second<<endl;
}