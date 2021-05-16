#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t n,A,nowmax=0;
  int64_t ans=0;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>A;
    if(nowmax>A){
      ans+=nowmax-A;
    }else{
      nowmax=A;
    }
  }
  cout<<ans<<endl;
}