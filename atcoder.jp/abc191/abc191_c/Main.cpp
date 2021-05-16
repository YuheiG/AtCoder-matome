#include <bits/stdc++.h>
using namespace std;

vector<vector<bool>> masu(10,vector<bool>(10));
int h,w;

int main(){
  char s;
  int ans=0;
  bool a,b,c,d;
  cin>>h>>w;
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      cin>>s;
      if(s=='#'){
        masu.at(i).at(j)=true;
      }else{
        masu.at(i).at(j)=false;
      }
    }
  }
  for(int i=1;i<h-1;i++){
    for(int j=1;j<w-1;j++){
      if(masu.at(i).at(j)){
      a=masu.at(i-1).at(j-1);
      b=masu.at(i-1).at(j);
      c=masu.at(i-1).at(j+1);
      d=masu.at(i).at(j-1);
      if(!a&&!b&&c&&!d)ans+=2;
      if(a&&b&&!c&&!d)ans+=2;
      if(a&&!b&&!c&&d)ans+=2;
      if(!a&&b&&c&&!d)ans+=2;
      if(!a&&!b&&c&&d)ans-=2;
      if(a&&b&&c&&!d)ans+=4;
      if(a&&b&&!c&&d)ans-=2;
      if(!a&&b&&c&&d)ans+=2;
      if(!a&&!b&&!c&&!d)ans+=4;
     // cout<<"("<<i<<","<<j<<") ans="<<ans<<"abcd"<<a<<b<<c<<d<<endl;
      }
    }
  }
  cout<<ans<<endl;
}
  