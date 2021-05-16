#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, S;
  cin >> N >> S;
  vector<int> A(N), P(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }
  for (int i = 0; i < N; i++) {
    cin >> P.at(i);
  }
  int sum,c=0;
  bool ans=false;
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      sum=A.at(i)+P.at(j);
      if(sum==S){
      	ans=true;
        c++;
      }
    }
  }
  cout<<c<<endl;
}
