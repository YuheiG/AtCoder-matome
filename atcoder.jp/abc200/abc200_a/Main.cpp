#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  if(n%100==0){
    cout<<n/100<<endl;
  }else{
    cout<<1+n/100<<endl;
  }
}