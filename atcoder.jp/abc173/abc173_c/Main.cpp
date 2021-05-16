#include <bits/stdc++.h>
using namespace std;
int masu[10][10];
int h,w;
int masukazoe(int gyob,int retub){
  int ans=0;
  bitset<7> g(gyob),r(retub);
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      if(!g.test(i)&&!r.test(j)){
        if(masu[i][j]==1)ans++;
      }
    }
  }
  return ans;
  
}
int main(){
  int k,ans;
  string s;
  cin>>h>>w>>k;
 
  for(int i=0;i<h;i++){
    cin>>s;
    for(int j=0;j<w;j++){
      if(s.at(j)=='.'){
        masu[i][j]=0;
      }else{
        masu[i][j]=1;
      }
    }
  }
  ans=0;
  for(int i=0;i<(1<<h);i++){
    for(int j=0;j<(1<<w);j++){
      if(masukazoe(i,j)==k)ans++;
    }
  }
  cout<<ans<<endl;
}
