#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,A;
  int64_t ans=0; 
  vector<int64_t> a(201);
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>A;
    a.at(A%200)++;
  }
  for(int i=0;i<200;i++){
    if(a.at(i)<2)continue;
    ans+=a.at(i)*(a.at(i)-1)/2;
  }
  cout<<ans<<endl;
  
}
  
  
  