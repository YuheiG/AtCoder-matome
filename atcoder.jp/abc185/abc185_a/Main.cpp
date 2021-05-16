#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main(){
  int a=100,ai;
  for(int i=0;i<4;i++){
    cin>>ai;
    a=min(a,ai);
  }
  cout<<a<<endl;
}