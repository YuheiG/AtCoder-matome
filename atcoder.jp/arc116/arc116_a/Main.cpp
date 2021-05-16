#include <bits/stdc++.h>
using namespace std;

int main(){
  int T;
  cin>>T;
  vector<int64_t> n(2000000);
  for(int i=0;i<T;i++){
    cin>>n.at(i);
  }
  for(int i=0;i<T;i++){
    if(n.at(i)%2==1){
      cout<<"Odd"<<endl;
    }else if((n.at(i)/2)%2==1){
      cout<<"Same"<<endl;
    }else{
      cout<<"Even"<<endl;
    }
  }
}

