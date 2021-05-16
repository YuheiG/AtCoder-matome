#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,b,sa,wa;
  vector<int> god;
  cin>>a>>b;
  if(a==b){
    for(int i=1;i<=a;i++){
      god.push_back(i);
      god.push_back(-1*i);
    }
  }else if(a>b){
    sa=a-b;
    wa=0;
    for(int i=1;i<=sa+1;i++){
      god.push_back(i);
      wa+=i;
    }
    god.push_back(-1*wa);
    for(int i=0;i<b-1;i++){
      wa++;
      god.push_back(wa);
      god.push_back(-1*wa);
    }
  }else{
      sa=b-a;
    wa=0;
    for(int i=1;i<=sa+1;i++){
      god.push_back(-1*i);
      wa+=i;
    }
    god.push_back(wa);
    for(int i=0;i<a-1;i++){
      wa++;
      god.push_back(wa);
      god.push_back(-1*wa);
    }
  }
  for(int i=0;i<god.size();i++){
   cout<<god.at(i)<<" ";

  }
  cout<<endl;

}