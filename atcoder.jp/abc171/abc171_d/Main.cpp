#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,q,A,b,c;
  int64_t ans=0;
  vector<int> kazu(100001);
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>A;
    ans+=A;
    kazu.at(A)++;
  }
  cin>>q;
  for(int i=0;i<q;i++){
    cin>>b>>c;
    ans+=(c-b)*kazu.at(b);
    kazu.at(c)+=kazu.at(b);
    kazu.at(b)=0;
    cout<<ans<<endl;
  }
}