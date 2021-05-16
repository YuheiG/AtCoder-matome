#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  int64_t sum; 
  cin>>n;
  int f[100000];
  for(int i=1;i<sqrt(n)+1;i++){
    for(int j=1;j<sqrt(n)+1;j++){
      for(int k=1;k<sqrt(n)+1;k++){
       // cout<<i<<" "<<j<<" "<<k<<endl;
        sum=i*i+j*j+k*k+i*j+j*k+k*i;
        f[sum]++;
      }
    }
  }
  for(int i=1;i<=n;i++){
    cout<<f[i]<<endl;
  }
}
