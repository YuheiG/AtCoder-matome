#include <bits/stdc++.h>
using namespace std;

int main(){
  int k,a;
  vector<int> x,k1,k2;
  int64_t ans=0,n;
  cin>>n>>k;
  for(int i=0;i<k;i++){
    for(int j=0;n>0;j++){
      x.push_back(n%10);
      n/=10;
    }
    a=x.size();
  //  cout<<"a="<<a<<" i="<<i<<endl;
    sort(x.begin(),x.end());
    for(int j=0;j<a;j++){
      k2.push_back(x.at(j));
    }
    reverse(x.begin(),x.end());
    for(int j=0;j<a;j++){
      k1.push_back(x.at(j));
    }
    for(int j=0;j<a;j++){
      ans+=(k2.at(j)-k1.at(j))*pow(10,j);
      //cout<<"k1="<<k1.at(j)<<" k2="<<k2.at(j)<<" ans="<<ans<<endl;
    }
    n=ans;
 //   cout<<"n="<<n<<endl;
    ans=0;
    k1.clear();
    k2.clear();
    x.clear();
  }
  cout<<n<<endl;
}