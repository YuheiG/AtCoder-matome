#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin>>s;
  if(s.size()%2==1){
    cout<<"No"<<endl;
    return 0;
  }else{
    for(int i=0;i<s.size()/2;i++){
      if(s.at(2*i)!='h'||s.at(2*i+1)!='i'){
        cout<<"No"<<endl;
        return 0;
      }
    }
  }
  cout<<"Yes"<<endl;
}
  