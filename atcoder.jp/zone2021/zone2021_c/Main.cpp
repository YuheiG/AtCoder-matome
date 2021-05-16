#include <bits/stdc++.h>
using namespace std;
int64_t kamoku[5][3001],n;

bool check(int64_t ju){
  unordered_set<bitset<5>> nou;
  vector<bitset<5>> nou2;
  for(int64_t i=0;i<n;i++){
    bitset<5> kari;
    for(int j=0;j<5;j++)if(kamoku[j][i]>=ju)kari.set(j);
   // cout<<kari<<endl;
    nou.insert(kari);
  }
  for(const auto& x:nou)nou2.push_back(x);
  int nousize=nou.size();
  bitset<5> y;
  for(int i=0;i<nousize;i++){
    for(int j=0;j<nousize&&j<=i;j++){
      for(int k=0;k<nousize&&k<=j;k++){
      //  cout<<i<<" "<<j<<" "<<k<<endl;;
        y=nou2.at(i)|nou2.at(j)|nou2.at(k);
        if(y.all())return true;
      }
    }
  }
  return false;
  
}

int main(){
  int64_t up=pow(10,9)+3,down=0;
  int64_t ju;

  cin>>n;
  for(int64_t i=0;i<n;i++){
    for(int64_t j=0;j<5;j++)cin>>kamoku[j][i];
  } 
  
  while(up-down!=1){
    ju=(up+down)/2;
  //  cout<<"--------------------"<<endl;
  //  cout<<down<<" "<<up<<" "<<ju<<endl;
    if(check(ju)){
      down=ju;
    }else{
      up=ju;
    }
  }
  
  cout<<down<<endl;
}