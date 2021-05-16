#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main(){
  int n,k,time,ans=0;
  vector<int> z;
  int t[10][10];
  cin>>n>>k;
  for(int i=0;i<n;i++){
    if(i!=0)z.push_back(i);
    for(int j=0;j<n;j++){
      cin>>t[i][j];
    }
  }
   time=t[0][z.at(0)];
    for(int i=0;i<n-2;i++){
      time+=t[z.at(i)][z.at(i+1)];
    }
    time+=t[z.at(n-2)][0];
    if(time==k){
      ans++;
    }
  while(next_permutation(z.begin(),z.end())){
    time=t[0][z.at(0)];
    for(int i=0;i<n-2;i++){
      time+=t[z.at(i)][z.at(i+1)];
    }
    time+=t[z.at(n-2)][0];
    if(time==k){
      ans++;
    }
  /*  for(int i=0;i<n-1;i++){
        cout<<z.at(i)<<" ";
    }
    cout<<endl;*/
    
  }
  cout<<ans<<endl;
}
  