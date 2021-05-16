#include <bits/stdc++.h>
using namespace std;

int main(){
  int s,c=0;
  cin>>s;
  
  for(int i=0;i<3;i++){
  if(s%10==1){
    c++;
  }
  s/=10;

  }
  cout<<c<<endl;    
  
}
