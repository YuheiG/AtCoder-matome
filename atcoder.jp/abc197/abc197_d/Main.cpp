#include <bits/stdc++.h>
#include <math.h>
using namespace std;

#define PI 3.14159265359
int main(){
  vector<double> x(10),y(10);
  double xg,yg;
  int N;
  cin>>N;
  cin>>x.at(0)>>y.at(0);
  cin>>x.at(2)>>y.at(2);
  xg=(x.at(0)+x.at(2))/2;
  yg=(y.at(0)+y.at(2))/2;
  x.at(3)=x.at(0)-xg;
  y.at(3)=y.at(0)-yg;
  x.at(1)=x.at(3)*cos(2.0*PI/N)-y.at(3)*sin(2.0*PI/N)+xg;
  y.at(1)=x.at(3)*sin(2.0*PI/N)+y.at(3)*cos(2.0*PI/N)+yg;
  cout<<x.at(1)<<" "<<y.at(1)<<endl; 
}
  