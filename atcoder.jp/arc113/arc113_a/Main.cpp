#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main(){
  int k,k1,ans_bc,ans=0;
  cin>>k;
  for(int i=k;i>0;i--){
    ans_bc=0;
    k1=k/i;
    for(int j=k1;j>0;j--){
      for(int l=1;true;l++){
        if(j*l<=k1){
          ans_bc++;
        }else{
          break;
        }
      }
    }
  //  cout<<ans_bc<<"  "<<i<<endl;
    ans+=ans_bc;
  }
  cout<<ans<<endl;
}