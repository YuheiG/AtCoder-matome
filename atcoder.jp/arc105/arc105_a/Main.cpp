#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main(){
  int a,b,c,d,eat,nokori;
  cin>>a>>b>>c>>d;
  for(int i=1;i<(1<<4);i++){
    bitset<4> co(i);
   // cout<<co<<endl;
    eat=0;
    nokori=0;
    if(co.test(0)){
      eat+=a;
    }else{
      nokori+=a;
    }
    if(co.test(1)){
      eat+=b;
    }else{
      nokori+=b;
    }
    if(co.test(2)){
      eat+=c;
    }else{
      nokori+=c;
    }
    if(co.test(3)){
      eat+=d;
    }else{
      nokori+=d;
    }
    if(eat==nokori){
      cout<<"Yes"<<endl;
      return 0;
    }
  }
  cout<<"No"<<endl;

  
}