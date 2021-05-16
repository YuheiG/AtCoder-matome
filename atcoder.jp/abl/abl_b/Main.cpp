#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t a,b,c,d;
  cin>>a>>b>>c>>d;
  if((b>c&&a>d)||(b<c&&a<d)){
    cout<<"No"<<endl;
  }else{
    cout<<"Yes"<<endl;
  }
}