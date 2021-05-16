#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,alice=0,bob=0;
   vector<int> a(1000);
  cin>>N;
  for(int i=0;i<N;i++){
    cin>>a.at(i);
  }
 
  sort(a.begin(),a.end());
  reverse(a.begin(),a.end());
  for(int i=0;i<N;i++){
    if(i%2==0){
      alice+=a.at(i);
    }else{
      bob+=a.at(i);
    }
  }
  cout<<alice-bob<<endl;
  
}