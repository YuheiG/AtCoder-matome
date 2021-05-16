#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main(){
  int n,idayo,ansmax=0,ans;
  int a[101];
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int i=2;i<1001;i++){
    ans=0;
    for(int j=0;j<n;j++){
      if(a[j]%i==0)ans++;
    }
    if(ans>ansmax){
      ansmax=ans;
      idayo=i;
    }
  }
  cout<<idayo<<endl;
}