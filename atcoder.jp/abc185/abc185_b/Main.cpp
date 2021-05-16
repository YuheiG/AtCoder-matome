#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main(){
  int nf,n,m,t;
  int a1,a2;
  cin>>nf>>m>>t;
  n=nf;
  a1=0;
  for(int i=0;i<2*m;i++){
    cin>>a2;
   // cout<<a2<<"  "<<a1<<"  "<<pow(-1,i)*(a2-a1)<<endl;
    n-=pow(-1,i)*(a2-a1);
    a1=a2;
    if(n<=0){
      cout<<"No"<<endl;
      return 0;
    }
    if(n>nf)n=nf;
  }
  n-=t-a1;
  if(n<=0){
    cout<<"No"<<endl;
  }else{
    cout<<"Yes"<<endl;
  }
}