#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using Graph = vector<vector<int> >;


int n,L,k;
vector<int> a;
bool check(int l){
  int wa=0,nokori,cut=0;
  nokori=L;
  rep(i,n){
    if(i==0){
      wa=a.at(i);
    }else{
      wa+=a.at(i)-a.at(i-1);
    }
    
    if(wa>=l){
      nokori-=wa;
      wa=0;
      cut++;
    }
    if(cut==k)break;
  }
  if(cut<k||nokori<l){
    return false;
  }else{
    return true;
  }
}


int main(){
  int A,le,ri;
  cin>>n>>L>>k;
  rep(i,n){
    cin>>A;
    a.push_back(A);
  }
  le=1;
  ri=L;
  while(ri-le!=1){
    int c;
    c=(ri+le)/2;
    if(check(c)){
      le=c;
    }else{
      ri=c;
    }
  }
  cout<<le<<endl;
}

