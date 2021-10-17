#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int> >;

int main(){
  int n;
  vector<int> a,b;
  cin>>n;
  int A,B;
  double leng_sum=0.0,l;
  vector<double> leg1;
  rep(i,n){
    cin>>A>>B;
    a.push_back(A);
    b.push_back(B);
    l=A*1.0/B*1.0;
  //  cout<<l<<endl;
    leg1.push_back(l);
    leng_sum+=l;
  }
  leng_sum/=2.0;
  double ans=0.0;
  for(int i=0;true;i++){
    if(leng_sum>leg1.at(i)){
      leng_sum-=leg1.at(i);
      ans+=a.at(i)*1.0;
      continue;
    }else{
      leng_sum*=b.at(i)*1.0;
      ans+=leng_sum;
      cout<<fixed;
      cout<<setprecision(15)<<ans<<endl;
      return 0;
    }
  }
  
  return 0;
}


