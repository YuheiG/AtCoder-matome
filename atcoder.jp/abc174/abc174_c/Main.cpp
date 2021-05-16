#include <bits/stdc++.h>
using namespace std;

int main(){
  int k;
  int64_t ans=1,amari=7;
  vector<int> amari_list;
  cin>>k;
  bitset<1000002> amari_l;
  if(7%k==0){
    cout<<1<<endl;
    return 0;
  }
  amari_l.set(7);
  
  while(amari!=0){
    ans++;
    amari=amari*10+7;
    amari%=k;   
    if(amari_l.test(amari)){
      cout<<-1<<endl;
      return 0;
    }else{
      amari_l.set(amari);
    }
  }
  cout<<ans<<endl;
}