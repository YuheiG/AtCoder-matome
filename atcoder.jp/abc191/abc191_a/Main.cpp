#include <bits/stdc++.h>
using namespace std;

int main(){
  double time,v,t,s,d;
  cin>>v>>t>>s>>d;
  time=d/v; 
  if(t<=time&&time<=s){
    cout<<"No"<<endl;
  }else{
    cout<<"Yes"<<endl;
  }
}
  