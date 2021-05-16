#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

bool check(int64_t y,int x){
  vector<int> sosu={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
  for(int i=0;i<15;i++){
    if(y%sosu.at(i)==0&&x%sosu.at(i)==0){
      return false;
    }
  }
  return true;
}

int main(){
  int n;
  int x[50];
  cin>>n;
  int64_t ans=1,ansmin=707925684877891993;
  for(int i=0;i<n;i++)cin>>x[i];
  for(int64_t i=1;i<(1<<15);i++){
     bitset<15> sosu(i);
    ans=1;
  if(sosu.test(0))ans*=2;
  if(sosu.test(1))ans*=3;
  if(sosu.test(2))ans*=5;
  if(sosu.test(3))ans*=7;
  if(sosu.test(4))ans*=11;
  if(sosu.test(5))ans*=13;
  if(sosu.test(6))ans*=17;
  if(sosu.test(7))ans*=19;
  if(sosu.test(8))ans*=23;
  if(sosu.test(9))ans*=29;
  if(sosu.test(10))ans*=31;
  if(sosu.test(11))ans*=37;
  if(sosu.test(12))ans*=41;
  if(sosu.test(13))ans*=43;
  if(sosu.test(14))ans*=47;
    bool gg=true;
    for(int j=0;j<n;j++){
      if(check(ans,x[j])){
        gg=false;
        break;
      }
    }
   // cout<<ans<<"  "<<ansmin<<endl;
    if(gg)ansmin=min(ansmin,ans);
  }  
  cout<<ansmin<<endl;
  
}