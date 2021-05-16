#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main(){
  int n,amin=1000000001,A;
  vector<int> a,yakusu;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>A;
    amin=min(A,amin);
    a.push_back(A);
  }
  for(int i=1;i<=sqrt(amin);i++){
    if(i*i==amin){
      yakusu.push_back(i);
    }else if(amin%i==0){
      yakusu.push_back(i);
      yakusu.push_back(amin/i);
    }
  }
  sort(yakusu.begin(),yakusu.end());
  reverse(yakusu.begin(),yakusu.end());
  int yaku_n=yakusu.size();
  bool check;
  for(int i=0;i<yaku_n;i++){
    check=true;
    for(int j=0;j<n;j++){
      if(a.at(j)%yakusu.at(i)!=0){
        check=false;
        break;
      }
    }
    if(check){
      cout<<yakusu.at(i)<<endl;
      return 0;
    }
  }
  
}
  