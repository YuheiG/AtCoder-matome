#include <bits/stdc++.h>
using namespace std;

int main(){
  int H,W,X,Y,ans=1,hantei=0;
  vector<string> S(1000);
  cin>>H>>W>>X>>Y;
  for(int i=0;i<H;i++){
    cin>>S.at(i);
  }

  X--;
  Y--;
  for(int x=X;x<H;x++){
    if(S.at(x).at(Y)=='.'){
      ans++;
    }else{
      break;
    }
  }
  for(int x=X;0<=x;x--){
    if(S.at(x).at(Y)=='.'){
      ans++;
    }else{
      break;
    }
  }
  for(int y=Y;y<W;y++){
    if(S.at(X).at(y)=='.'){
      ans++;
    }else{
      break;
    }
  }
  for(int y=Y;0<=y;y--){
    if(S.at(X).at(y)=='.'){
      ans++;
    }else{
      break;
    }
  }
  cout<<ans-4<<endl;
}
  
  