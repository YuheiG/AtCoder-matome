#include <bits/stdc++.h>
using namespace std;

int main(){
  long long n,a,b;
  long long aoki=0;
  vector<long long> c;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a>>b;
    c.push_back(2*a+b);
    aoki+=a;
  }
  sort(c.begin(),c.end());
  reverse(c.begin(),c.end());
  for(int i=0;i<n;i++){
    aoki-=c[i];
    if(aoki<0){
      cout<<i+1<<endl;
      return 0;
    }
  }
}