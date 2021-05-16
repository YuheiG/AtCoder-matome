#include <bits/stdc++.h>
using namespace std;

int main(){
  string n;
  int sum=0;
  cin>>n;
  for(int i=0;i<n.size();i++){
    sum+=n.at(i)-'0';
  }
  if(sum%9==0){
    cout<<"Yes"<<endl;
  }else{
    cout<<"No"<<endl;
  }
}