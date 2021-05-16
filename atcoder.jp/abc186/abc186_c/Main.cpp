#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,n8=0,n10=0,kari,ans=0;
  cin>>n;
  kari=n;
  int a=0;
  bool c;
  for(int i=1;i<n+1;i++){
    kari=i;
    c=true;
    n8=0;
    a=0;
    n10=i;
    while(kari!=0){
       n8+=pow(10,a)*(kari%8);
       kari/=8;
       a++;
    }
  //  cout<<"n10="<<n10<<" n8="<<n8<<endl;
      if(n10%10==7)c=false;
      if((n10/10)%10==7)c=false;
      if((n10/100)%10==7)c=false;
      if((n10/1000)%10==7)c=false;
      if((n10/10000)%10==7)c=false;
      if((n10/100000)%10==7)c=false;
      if(n8%10==7)c=false;
      if((n8/10)%10==7)c=false;
      if((n8/100)%10==7)c=false;
      if((n8/1000)%10==7)c=false;
      if((n8/10000)%10==7)c=false;
      if((n8/100000)%10==7)c=false;
    if(c)ans++;
  }
  cout<<ans<<endl;
}