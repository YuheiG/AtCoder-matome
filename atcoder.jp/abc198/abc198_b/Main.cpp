#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main(){
  int j=0,n,a[10];
  bool zeroend=false;
  cin>>n;
  for(int i=0;n>0;i++){
    if(n%10!=0){
      zeroend=true;
    }
    if(zeroend){
      a[j]=n%10;
      j++;
    }
    n/=10;
  }
  
  for(int i=0;i<j/2;i++){
    if(a[i]!=a[j-1-i]){
      cout<<"No"<<endl;
      return 0;
    }
  } 
  cout<<"Yes"<<endl;
}