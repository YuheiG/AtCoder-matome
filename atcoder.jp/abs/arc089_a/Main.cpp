#include <bits/stdc++.h>
using namespace std;

int main(){
  int dt,N,dl,dx,dy,ans=0;
  vector<int> x(1000000),y(1000000),t(1000000);
  x.at(0)=0;
  y.at(0)=0;
  t.at(0)=0;
  cin>>N;
  for(int i=1;i<N+1;i++){
    cin>>t.at(i)>>x.at(i)>>y.at(i);
  }
  for(int i=0;i<N;i++){
    dt=t.at(i+1)-t.at(i);
    dx=x.at(i+1)-x.at(i);
    dy=y.at(i+1)-y.at(i); 
  	if(dx<0){dx*=-1;}
    if(dy<0){dy*=-1;}
    dl=dx+dy;
    if(dt<dl){
      ans=1;
      break;
    }else if((dt-dl)%2==1){
      ans=1;
      break;
    }
  }
  if(ans==0){
    cout<<"Yes"<<endl;
  }else{
    cout<<"No"<<endl;
  }
}
  