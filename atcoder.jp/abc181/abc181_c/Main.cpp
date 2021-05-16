#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int x[101],y[101];
  for(int i=0;i<n;i++)cin>>x[i]>>y[i];
  
  for(int i=0;i<n;i++){
    for(int j=0;j<n&&i>j;j++){
      for(int k=0;k<n&&i!=k&&j!=k;k++){
      //  cout<<i<<" "<<j<<" "<<k<<endl;
        if((y[k]-y[j])*(x[j]-x[i])==(x[k]-x[j])*(y[j]-y[i])){
          cout<<"Yes"<<endl;
          return 0;
        }
      }  
    }
  }
  cout<<"No"<<endl;
}
  