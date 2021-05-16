#include <bits/stdc++.h>
using namespace std;

int main(){
  int L,R,d,ans=0;
  cin>>L>>R>>d;
  for(int i=L;i<=R;i++){
    if(i%d==0)ans++;
  }
 cout<<ans<<endl;
}
