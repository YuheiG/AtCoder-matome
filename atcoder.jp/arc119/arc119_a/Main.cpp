#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int> >;
  
int main(){
  long long n,ans=pow(10,18),a,b,c,B;
  cin>>n;
  for(int i=0;i<60;i++){
    b=i;
    B=pow(2,b);
    a=n/B;  
    if(a!=0){
      if(LLONG_MAX/a<B)continue;
    }
    c=n-a*B;
    if(c<0)continue;
    ans=min(ans,a+b+c);
  }
  cout<<ans<<endl;
}