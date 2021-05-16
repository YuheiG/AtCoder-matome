#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t n,seki;
  vector<int64_t> seki3,seki5;
  seki=1;
  cin>>n;
  for(int i=0;seki<n;i++){
    seki*=3;
    seki3.push_back(seki);
  }
  seki=1;
  for(int i=0;seki<n;i++){
    seki*=5;
    seki5.push_back(seki);
  }
  
  
  for(int i=0;i<seki3.size();i++){
    for(int j=0;j<seki5.size();j++){
     // cout<<seki3.at(i)<<" "<<seki5.at(j)<<endl;
      if(seki3.at(i)+seki5.at(j)==n){
        cout<<i+1<<" "<<j+1<<endl;
        return 0;
      }
    }
  }
  cout<<-1<<endl;
}
  