#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,x,A;
  vector<int> a;
  cin>>n>>x;
  for(int i=0;i<n;i++){
    cin>>A;
    if(A!=x){
      cout<<A<<" ";
    }
  }
  cout<<endl;
}