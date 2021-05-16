#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<bitset<20>> s;
  int n,m;
  int64_t even=0,odd=0;
  bitset<20> b1;
  cin>>n>>m;
  for(int i=0;i<n;i++){
    cin>>b1;
    if(b1.count()%2==0){
      even++;
    }else{
      odd++;
    } 
  }
  cout<<odd*even<<endl;
}
