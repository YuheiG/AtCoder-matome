#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using Graph = vector<vector<int> >;

int main(){
  int n,m,x,ans=INT_MAX;
  int c[13],a[13][13];
  
  cin>>n>>m>>x;
  for(int i=0;i<n;i++){
    cin>>c[i];
    for(int j=0;j<m;j++){
      cin>>a[i][j];
    }
  }
  for(int i=1;i<(1<<n);i++){
    bitset<12> b(i);
    int pr=0;
    vector<int> ex(12);
    for(int j=0;j<n;j++){
      if(!b.test(j))continue;
      pr+=c[j];
      for(int k=0;k<m;k++)ex.at(k)+=a[j][k];  
    }
    bool check=true;
    for(int j=0;j<m&&check;j++){
      if(ex.at(j)<x)check=false;
    }
    if(check){
      ans=min(ans,pr);
    }
  }
  if(ans==INT_MAX){
    cout<<-1<<endl;
  }else{
    cout<<ans<<endl;
  }
}
