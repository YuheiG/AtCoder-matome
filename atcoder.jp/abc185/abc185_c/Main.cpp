#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main(){
  int64_t L,ansue=1,anssita=1,ans;
  cin>>L;
  for(int i=0;i<11;i++){
    ansue*=L-1-i;
    anssita*=i+1;
    if(ansue%2==0&&anssita%2==0){
      ansue/=2;
      anssita/=2;
    }
    if(ansue%3==0&&anssita%3==0){
      ansue/=3;
      anssita/=3;
    }
    if(ansue%5==0&&anssita%5==0){
      ansue/=5;
      anssita/=5;
    }
    if(ansue%7==0&&anssita%7==0){
      ansue/=7;
      anssita/=7;
    }
    if(ansue%11==0&&anssita%11==0){
      ansue/=11;
      anssita/=11;
    }
  //  cout<<"ansue="<<ansue<<endl;
  //  cout<<"anssita="<<anssita<<endl;
  }
  ans=ansue/anssita;
  cout<<ans<<endl;
}
  