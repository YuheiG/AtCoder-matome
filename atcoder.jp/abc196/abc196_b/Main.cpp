#include <bits/stdc++.h>
using namespace std;

int main(){    
  string x;
  cin>>x;
  for(int i=0;i<x.size();i++){
    if(x.at(i)!='.'){
      cout<<x.at(i);
    }else{
      break;
    }
  }
  cout<<endl;
}
  