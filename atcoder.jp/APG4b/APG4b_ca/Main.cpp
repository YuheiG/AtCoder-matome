#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,i;
  vector<pair<int,int>> p;
  pair<int,int> x;
  cin>>n;
  for(i=0;i<n;i++){
    cin>>x.second>>x.first;
    p.push_back(x);
  }
  sort(p.begin(),p.end());
  for(i=0;i<n;i++){
    cout<<p.at(i).second<<" "<<p.at(i).first<<endl;
  }
}