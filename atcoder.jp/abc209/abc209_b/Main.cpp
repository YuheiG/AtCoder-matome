#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int> >;

int main(){  
  
  int n,x,sum=0,a;
  cin>>n>>x;  
  rep(i,n){
    cin>>a;
    if(i%2==1){
      a--;
    }
    sum+=a;    
  }
  
  if(sum>x){
    cout<<"No"<<endl;
  }else{
    cout<<"Yes"<<endl;
  }
  
  return 0;
}

