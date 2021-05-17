#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int> >;
  
int main(){
  string s;
  cin>>s;
  
  int num[4],ans=0;
  for(int i=0;i<10;i++){
    num[0]=i;
    if(s.at(i)=='x')continue; 
    for(int j=0;j<10;j++){
      num[1]=j;
      if(s.at(j)=='x')continue;
      for(int k=0;k<10;k++){
        num[2]=k;
        if(s.at(k)=='x')continue;
        for(int l=0;l<10;l++){
          num[3]=l;
          if(s.at(l)=='x')continue;
          bool check=true;
          for(int m=0;m<10;m++){
            if(s.at(m)=='o'){
              if(num[0]==m||num[1]==m||num[2]==m||num[3]==m){
              }else{
                check=false;
              }
            }
            if(!check)break;
          }
          if(!check)continue;
          ans++;
        }
      }
    }
  }
  cout<<ans<<endl;
}