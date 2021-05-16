#include <bits/stdc++.h>
using namespace std;

int main(){
  int c[5],n;
  string s;
  cin>>n;
  for(int i=0;i<4;i++)c[i]=0;
  for(int i=0;i<n;i++){
    cin>>s;
    if(s=="AC"){
      c[0]++;
    }else if(s=="WA"){
      c[1]++;
    }else if(s=="TLE"){
      c[2]++;
    }else if(s=="RE"){
      c[3]++;
    }
  }
  cout<<"AC x "<<c[0]<<endl;
  cout<<"WA x "<<c[1]<<endl;
  cout<<"TLE x "<<c[2]<<endl;
  cout<<"RE x "<<c[3]<<endl;
}
