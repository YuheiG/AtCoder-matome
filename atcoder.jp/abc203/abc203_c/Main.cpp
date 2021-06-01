#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using Graph = vector<vector<int> >;

int main() {
  int64_t A,B,n,k,now;
  vector<pair<int64_t,int64_t>> q;
  cin>>n>>k;
  rep(i,n){
    cin>>A>>B;
    q.push_back(make_pair(A,B));
  }
  sort(q.begin(),q.end());
  now=0;
  rep(i,n){
    if(k+now-q.at(i).first>=0){
      k=k+now-q.at(i).first;
      k+=q.at(i).second;
      now=q.at(i).first;
    }else{
      now+=k;
      k=0;
      break;
    }
  }
  now+=k;
  cout<<now<<endl;
}