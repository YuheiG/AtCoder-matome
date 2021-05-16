#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int i,x=1;
  for(i=1;i<S.size();i+=2){
  	if(S.at(i)=='+'){
      x++;
    }else if(S.at(i)=='-'){
      x--;
    }
  }
  cout<<x<<endl;
  // ここにプログラムを追記
}