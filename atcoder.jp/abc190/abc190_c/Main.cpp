#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m,k,a[101],b[101],c[17],d[17],ball[101];
  int ansmax=0,ans;
  cin>>n>>m;
  for(int i=0;i<m;i++)cin>>a[i]>>b[i];
    for(int i=0;i<m;i++){
    a[i]--;
    b[i]--;
  }
  cin>>k;
  for(int i=0;i<k;i++)cin>>c[i]>>d[i];
  for(int i=0;i<k;i++){
    c[i]--;
    d[i]--;
  }
    
  for(int i=0;i<(1<<k);i++){
    bitset<16> ch(i);
     for(int j=0;j<n;j++)ball[j]=0;
     for(int j=0;j<k;j++){
      if(ch.test(j)){
        ball[c[j]]++;
      }else{
        ball[d[j]]++;
      }
    }
    ans=0;
 /*   cout<<"-----------------------"<<endl;
    cout<<ch<<endl;
    for(int j=0;j<n;j++)cout<<ball[j]<<" ";
    cout<<endl;*/
    
    for(int j=0;j<m;j++){
      if(ball[a[j]]>0&&ball[b[j]]>0)ans++;
    }
    ansmax=max(ansmax,ans);
  }
  cout<<ansmax<<endl;
}