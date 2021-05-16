#include <bits/stdc++.h>
using namespace std;

int main(){
  int a[100000],b[100000],n;
  int64_t ans=0;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int i=0;i<n;i++){
    cin>>b[i];
    ans+=a[i]*b[i];
  }
  
  if(ans==0){
    cout<<"Yes"<<endl;
  }else{
    cout<<"No"<<endl;
  }
  
}