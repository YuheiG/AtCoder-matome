#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,b,x,min,max;
  cin>>a>>b>>x;
  x*=1000;
  max=x/a;
  min=x/b;
 if(min==max&&x%a!=0){
   cout<<"UNSATISFIABLE"<<endl;
 }else{
   if(x%b!=0)min++;
   cout<<min<<" "<<max<<endl;
 }
}
  
  