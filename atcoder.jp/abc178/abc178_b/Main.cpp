#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t ans1,ans2,ans3,ans4,a,b,c,d;
  cin>>a>>b>>c>>d;
 
  ans1=b*d;
  ans2=b*c;
  ans3=a*c;
  ans4=a*d;
  
  cout<<max(max(ans1,ans2),max(ans3,ans4))<<endl;
    
  
}