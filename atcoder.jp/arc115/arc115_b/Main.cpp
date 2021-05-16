#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,amin=1000000001,bmin=1000000001;  
  cin>>n;
  bool ans=true;
  int c[500][500],a[500],b[500];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>c[i][j];
    }
    a[i]=c[i][0];
    amin=min(amin,a[i]);
  }
  for(int j=0;j<n;j++){
    b[j]=c[0][j]-a[0];
    bmin=min(bmin,b[j]);
  }
  
  for(int i=1;i<n;i++){
    for(int j=1;j<n;j++){
      if(c[i][j]-a[i]!=b[j])ans=false;
    }
  }
  
  if(bmin>=0||abs(bmin)<=amin){
    if(ans)ans=true;
  }else{
    ans=false;
  } 
  if(ans){
    cout<<"Yes"<<endl;
    for(int i=0;i<n;i++){
      cout<<a[i]-abs(bmin)<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
      cout<<b[i]+abs(bmin)<<" ";
    }
    cout<<endl;
  }else{
    cout<<"No"<<endl;
  }
}
