#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  int64_t A1;
  vector<bitset<31>> a,orzumi;
  bitset<31> v;
  unsigned long long num,ans=pow(2,33);;
  cin>>n;
  if(n==1){
    cin>>A1;
    cout<<A1<<endl;
    return 0;
  }
  for(int i=0;i<n;i++){
    cin>>A1;
    a.push_back(A1);
  }
  for(int i=0;i<(1<<n-1);i++){
    bitset<20> wake(i);
   // cout<<wake<<endl;
    v.reset();
    orzumi.clear();
    for(int j=0;j<n-1;j++){
      v=v|a.at(j);
      if(wake.test(j)){
        orzumi.push_back(v);
        v.reset();
      }
      if(j==n-2){
        v=v|a.at(n-1);
        orzumi.push_back(v);
        v.reset();
      }
    }
   
    v.reset();
    for(int j=0;j<orzumi.size();j++){
      //cout<<j<<" "<<orzumi.at(j)<<endl;
      v=v^orzumi.at(j);
    }
    
    num=v.to_ullong();
    //cout<<num<<endl;
    ans=min(ans,num);
    
    //cout<<"--------------------"<<endl;
    
  }
  cout<<ans<<endl;
}