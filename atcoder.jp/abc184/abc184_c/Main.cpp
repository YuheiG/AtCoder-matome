#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main(){
  int64_t x1,y1,x2,y2;
  bool suji=false;
  cin>>x1>>y1>>x2>>y2;
  if(x1==x2&&y1==y2){
    cout<<"0"<<endl;
    return 0;
  }
  if((x1+y1)%2==(x2+y2)%2){
    suji=true;
  }
  if(abs((y1-x1)-(y2-x2))==0){
    cout<<"1"<<endl;
    return 0;
  }
  if(abs((y1+x1)-(y2+x2))==0){
    cout<<"1"<<endl;
    return 0;
  }
  if(abs(x1-x2)+abs(y1-y2)<=3){
    cout<<"1"<<endl;
    return 0;
  }
  if(abs((y1-x1)-(y2-x2))<=3){
    cout<<"2"<<endl;
    return 0;
  }
  if(abs((y1+x1)-(y2+x2))<=3){
    cout<<"2"<<endl;
    return 0;
  }
  if(suji){
    cout<<"2"<<endl;
    return 0;
  } 
  if(abs(x1-x2)+abs(y1-y2)<=6){
    cout<<"2"<<endl;
    return 0;
  }
  
  cout<<"3"<<endl;
}