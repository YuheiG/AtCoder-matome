#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,a;
  vector<int> neko;
  bitset<30> bitall,bitans;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a;
    neko.push_back(a);
    bitset<30> neko1(neko.at(i));
    bitall=bitall^neko1;
  }
  for(int i=0;i<n;i++){
    bitset<30> neko1(neko.at(i));
    bitans=bitall^neko1;
    unsigned long long ans=bitans.to_ullong();
    cout<<ans<<" ";
  }
  cout<<endl;
}