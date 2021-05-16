#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t a1,b1,c1,C,n,day;
  int64_t fee=0,feeall=0;
  vector<pair<int, int>> event;
  cin>>n>>C;
  for(int64_t i=0;i<2*n;i+=2){
    cin>>a1>>b1>>c1;
    event.push_back(make_pair(a1,c1));
    event.push_back(make_pair(b1+1,-1*c1));
  }
  sort(event.begin(),event.end());
  day=event[0].first;
  fee=event[0].second;
 // cout<<event[0].first<<"  "<<event[0].second<<endl;
  for(int i=1;i<2*n;i++){ 
    day=event[i].first-event[i-1].first;
    if(fee<C){
      feeall+=fee*day;
    }else{
      feeall+=C*day;
    }
    fee+=event[i].second;
   // cout<<event[i].first<<"  "<<event[i].second<<" "<<feeall<<endl;
  }
  cout<<feeall<<endl;
}
