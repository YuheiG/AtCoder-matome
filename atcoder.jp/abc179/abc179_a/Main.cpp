#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin>>s;
  if(s.at(s.size()-1)=='s'){
    s+="es";
  }else{
    s+='s';
  }
  cout<<s<<endl;
}
  