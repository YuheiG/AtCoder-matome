#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t n;
  vector<int64_t> powbox;
  cin>>n;
  string abc="zabcdefghijklmnopqrstuvwxy";
  int64_t name_n=0,x=0;
  while(true){
    name_n++;
    powbox.push_back(pow(26,name_n));
    x+=powbox.at(name_n-1);
    if(n<=x)break;
  }
  string name;
  name+=abc.at(n%26);
  for(int64_t i=0;i<name_n-1;i++){
    if(n%powbox.at(i)==0){
      n-=powbox.at(i);
    }else{
      n-=n%powbox.at(i);
    }
    
    name=abc.at((n/powbox.at(i))%26)+name;

  }
  cout<<name<<endl;
}