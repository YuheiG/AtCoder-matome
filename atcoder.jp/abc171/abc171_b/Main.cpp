#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,k,P;
  cin>>n>>k;
  vector<int> p;
  for(int i=0;i<n;i++){
    cin>>P;
    p.push_back(P);
  }
  sort(p.begin(),p.end());
  int ans=0;
  for(int i=0;i<k;i++)ans+=p.at(i);
  cout<<ans<<endl;
}