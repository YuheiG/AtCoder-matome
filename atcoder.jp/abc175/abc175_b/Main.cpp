#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,ans;
  vector<int64_t> L;
  int64_t l;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>l;
    L.push_back(l);
  }
  sort(L.begin(),L.end());
  ans=0;
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      for(int k=j+1;k<n;k++){
        if(L.at(i)!=L.at(j)&&L.at(i)!=L.at(k)&&L.at(j)!=L.at(k)){
          if(L.at(i)+L.at(j)>L.at(k))ans++;
        }
      }
    }
  }
  cout<<ans<<endl;
}