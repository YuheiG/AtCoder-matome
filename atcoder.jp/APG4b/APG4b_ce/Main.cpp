#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M), B(M);
  for (int i = 0; i < M; i++) {
    cin >> A.at(i) >> B.at(i);
  }
  vector<vector<char>> data(1000,vector<char>(1000,'-'));
  for (int i = 0; i < M; i++) {
    
    data.at(A.at(i)-1).at(2*B.at(i)-2)='o';
    data.at(B.at(i)-1).at(2*A.at(i)-2)='x';
  }
  for(int i=0;i<N;i++){
    for(int j=0;j<2*N-1;j++){
      if(j%2==1){
        data.at(i).at(j)=' ';
      }
      cout<<data.at(i).at(j);
    }
    cout<<endl;
  }
  
  
  // ここにプログラムを追記
  // (ここで"試合結果の表"の2次元配列を宣言)
}








  
      
 