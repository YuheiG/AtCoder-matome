#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main(){
  int m,d,d1,d10,ans=0;
  cin>>m>>d;
  for(int i=1;i<=m;i++){
    for(int j=11;j<=d;j++){
      d1=j%10;
      d10=j/10;
      if(d1*d10==i&&(d1>1&&d10>1)){
    //    cout<<"d1="<<d1<<" d10="<<d10<<" i="<<i<<endl;
        ans++;
      }
    }
  }
  cout<<ans<<endl;
}
  