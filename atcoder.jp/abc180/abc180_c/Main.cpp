#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t n;
  vector<int64_t> kazu;
  cin>>n;
  for(int64_t i=1;i<=sqrt(n);i++){
    if(n%i==0){
      kazu.push_back(i);
      if(n/i!=i)kazu.push_back(n/i);
    }
  }
  sort(kazu.begin(),kazu.end());
  for(int64_t i=0;i<kazu.size();i++){
    cout<<kazu.at(i)<<endl;
  }
}