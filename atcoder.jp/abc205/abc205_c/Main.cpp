#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using Graph = vector<vector<int> >;


int main() {
  long long a,b,c;
  cin>>a>>b>>c;
  if(a==b){
    cout<<"="<<endl;
    return 0;
  }
  
  if((a<0||b<0)&&c%2==1){
    if(a<0&&b<0){
      if(a>b){
      	cout<<"<"<<endl;
      }else if(a<b){
      	cout<<">"<<endl;
      }
    }else if(a<0&&b>=0){
      cout<<"<"<<endl;
    }else if(b<0&&a>=0){
      cout<<">"<<endl;
    }
    
  }else{
    a=abs(a);
    b=abs(b);
    if(a>b){
      cout<<">"<<endl;
    }else if(a<b){
      cout<<"<"<<endl;
    }else{
      cout<<"="<<endl;
    }
  }
  return 0;
  
}