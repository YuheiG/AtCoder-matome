#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,d1,d2,ans=0;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>d1>>d2;
    if(d1==d2){
      ans++;
    }else{
      ans=0;
    }
    if(ans==3){
      cout<<"Yes"<<endl;
      return 0;
    }
  }
  cout<<"No"<<endl;
  
  
}