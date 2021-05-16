#include <bits/stdc++.h>
using namespace std;

int main(){
  int j,n,a,b,sum=0,c=0;
  cin>>n>>a>>b;
  for(int i=1;i<n+1;i++){
	sum=0;
    j=i;
    while(true){
      sum+=j%10;
      j/=10;
      if(j==0){break;}
    }
    if(sum>=a&&sum<=b){
      c+=i;
    }
  }
  cout<<c<<endl;
}