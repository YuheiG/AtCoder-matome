#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using Graph = vector<vector<int> >;

int main(){
  int64_t n,k;
  int64_t a;
  cin>>n>>k;
  vector<int64_t> gr,seen,visit;
  for(int i=0;i<n;i++){
    cin>>a;
    a--;
    gr.push_back(a);
    seen.push_back(-1);
  }
  bool check=true;
  int now=0,c=0;
  seen.at(0)=0;
  visit.push_back(1);
  while(check){
    now=gr.at(now);
    c++;
    if(seen.at(now)!=-1)break;
    seen.at(now)=c;
    visit.push_back(1+now);
  }
// cout<<c<<" "<<now<<endl;
  int loop=c-seen.at(now);
 // cout<<loop<<endl;
  if(k<c){
    cout<<visit.at(k)<<endl;
    return 0;
  }
 
  int vsize=visit.size()-loop;
  k=k-vsize+loop;
  visit.erase(visit.begin(),visit.begin()+vsize);

 // cout<<loop<<endl;
  k%=loop;
  //for(int i=0;i<visit.size();i++){
  //  cout<<visit.at(i)<<" ";
  //}
 // cout<<endl;
  cout<<visit.at(k)<<endl;


}