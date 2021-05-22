#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using Graph = vector<vector<int> >;

int main(){
  int x;
  cin>>x;
  vector<long long> pow5(6209);
  map<long long ,int> num;
  for(int i=1;i<6209;i++){
    long long powgo;
    powgo=pow(i,5);
    if(powgo==x){
      cout<<i<<" "<<0<<endl;
      return 0;
    }
    if(LLONG_MAX-x<powgo)continue;
    num.insert(make_pair(x+powgo,i));
    num.insert(make_pair(x-powgo,-1*i));
  }

  for(int i=1;i<6209;i++){
    long long powgo;
    powgo=pow(i,5);
    if(num.find(powgo)!=num.end()){
      cout<<i<<" "<<num.at(powgo)<<endl;
      return 0;
    }
  }

}