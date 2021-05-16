#include <bits/stdc++.h>
using namespace std;

int main(){
  long long ans=1,A,b=pow(10,18),llmax=LLONG_MAX;
  vector<long long> a;
  
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>A;
    if(A==0){
      cout<<0<<endl;
      return 0;
    }
    a.push_back(A);
  }
  for(int i=0;i<n;i++){
    if(ans>llmax/a.at(i)){
      cout<<-1<<endl;
      return 0;
    }
    ans*=a.at(i);
    
    if(ans>b){
      cout<<-1<<endl;
      return 0;
    }else if(ans==0){
      break;
    }
  }
  cout<<ans<<endl;
}