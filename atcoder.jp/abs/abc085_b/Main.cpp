#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,x,dan=1;
  vector<int> d;
  cin>>N;
  for(int i=0;i<N;i++){
    cin>>x;
    d.push_back(x);
  }
  sort(d.begin(),d.end());
  for(int i=0;i<N-1;i++){
    if(d.at(i)<d.at(i+1)){
      dan++;;
    }
  }
  cout<<dan<<endl;
}