#include <bits/stdc++.h>
using namespace std;

bool can(vector<int> &a,int N){
  int i,j=0;
  for(i=0;i<N;i++){
    if(a.at(i)%2==1){
      j=-1;    
      break;
    }else{
      a.at(i)/=2;
    }
  }
  if(j>=0){
    return true;
  }else{
    return false;
  }
}

int main(){
  vector<int> A(1000);
  int N,n=0;
  cin>>N;
  for(int i=0;i<N;i++){
    cin>>A.at(i);
  }
  while(can(A,N)){
    n++;
  }
  cout<<n<<endl;
  
}

