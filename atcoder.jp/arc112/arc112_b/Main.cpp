#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main(){
  int64_t b,c,ans;
  int64_t c1,b1;
  bool zero,maina=false,zero_s=false;
  cin>>b>>c;
  if(b<0){
    b*=-1;
    c--;
    maina=true;
  }
  if(b==0){
    if(c==1){
      cout<<1<<endl;
      return 0;
    }
    cout<<(c/2)*2<<endl;
    return 0;
  }
  if(c==1){
    cout<<2<<endl;
    return 0;
  }
  
  if(c/2>=b){
    zero=true;
  }else{
    zero=false;
  }
  
  if(zero){
    c--;
    c1=c%2;
    b1=b+c/2;
    if(c1==1){
      ans=2*b1+1;
    }else{
      ans=2*b1;
    }
  }else{
    if(c%2==0){
      ans=(c/2)+(c/2);
      ans=ans*2-1;
    }else{
      ans=(c/2)+(c/2);
      ans=ans*2+1;
    }
  }
  if(maina)ans+=2;
  cout<<ans<<endl;
}