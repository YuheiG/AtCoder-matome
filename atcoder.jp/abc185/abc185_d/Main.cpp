#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main(){
  vector<int> a;
  int n,m,a1,ans=0,hanko=INT_MAX,haba;
  cin>>n>>m;
  a.push_back(0);
  for(int i=0;i<m;i++){
    cin>>a1;
    a.push_back(a1);
  }
  sort(a.begin(),a.end());
  a.push_back(n+1);
  for(int i=1;i<m+2;i++){
    //cout<<a[i]<<endl;
    if(a[i]-a[i-1]!=1){
      hanko=min(hanko,a[i]-a[i-1]-1);
    }
    //cout<<"ans="<<ans<<" a[i]="<<a[i]<<" hanko="<<hanko<<endl;
  }
  for(int i=1;i<m+2;i++){
    haba=a[i]-a[i-1]-1;
    if(haba!=0){
      if(haba%hanko!=0){
        ans++;
        haba-=haba%hanko;
      }
      ans+=haba/hanko;
    }
    //cout<<"ans="<<ans<<" a[i]="<<a[i]<<" hanko="<<hanko<<endl;
  }
  cout<<ans<<endl;
}