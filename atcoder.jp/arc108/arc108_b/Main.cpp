#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  string s;
  cin>>n>>s;
  s="kk"+s+"kk";
  for(int i=1;i<s.size()-2;i++){
    if(s.at(i)=='f'&&s.at(i+1)=='o'&&s.at(i+2)=='x'){
      s.erase(i,3);
      if(i>2){
        i-=3;
      }else{
        i=0;
      }
    }
  }
 // cout<<s<<endl;
  cout<<s.size()-4<<endl;
}
  