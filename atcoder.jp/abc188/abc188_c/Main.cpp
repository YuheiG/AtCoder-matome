#include <bits/stdc++.h>
using namespace std;

int A[100001];

int kn(int n,bool win,int bn){
  int a,b;
  if(n==1){
    a=2*bn-1;
    b=2*bn;
  }else{
    a=kn(n-1,true,2*bn-1);
    b=kn(n-1,true,2*bn);
  }
 // cout<<"a="<<a<<" b="<<b<<" n="<<n<<" bn="<<bn<<endl;
  if(win){
    if(A[a]>A[b]){
      return a;
    }else{
      return b;
    }
  }else{
    if(A[a]>A[b]){
      return b;
    }else{
      return a;
    }
  }
}

int main(){
  int n,ans;
  cin>>n;
  for(int i=1;i<pow(2,n)+1;i++){
    cin>>A[i];
  }
  
  ans=kn(n,false,1);
  cout<<ans<<endl;
  
}