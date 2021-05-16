#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,i,ave=0;
  cin >> N;
  vector<int> ten(N);
  for(i=0;i<N;i++){
    cin>>ten.at(i);
    ave+=ten.at(i);
  }
  ave/=N;
  for(i=0;i<N;i++){
    if(ten.at(i)>ave){
      cout<<ten.at(i)-ave<<endl;
    }else{
      cout<<ave-ten.at(i)<<endl;
    }
  }
}