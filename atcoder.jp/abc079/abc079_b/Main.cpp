#include <bits/stdc++.h>
using namespace std;

int main() {
  int i,n;
  vector<int64_t> L;
  cin>>n;
  L.push_back(2);
  L.push_back(1);
  for(i=2;i<n+1;i++){
    L.push_back(L.at(i-2)+L.at(i-1));
  }
  
  cout<<L.at(n)<<endl;
}