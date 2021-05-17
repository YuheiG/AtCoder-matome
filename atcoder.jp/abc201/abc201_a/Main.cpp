#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int> >;
  
int main(){
  int A;
  vector<int> a(3);
  for(int i=0;i<3;i++){
    cin>>a.at(i);
  }
  sort(a.begin(),a.end());
  if(a.at(2)-a.at(1)==a.at(1)-a.at(0)){
    cout<<"Yes"<<endl;
  }else{
    cout<<"No"<<endl;
  }
  
}

