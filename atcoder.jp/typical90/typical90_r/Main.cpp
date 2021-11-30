#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;



int main(){

	double y,z,X,Y,T,L;
	int q;
	cin>>T>>L>>X>>Y>>q;
	double pi=3.141592653589793;

	rep(i,q){
		double t,ans,leng;
		cin>>t;
		y=-(L/2.0)*sin(2.0*pi*t/T);
		z=-(L/2.0)*cos(2.0*pi*t/T)+L/2.0;
		leng=sqrt(pow(y-Y,2)+pow(X,2));
		ans=atan2(z,leng);
		ans*=180.0/pi;
		cout<<fixed<<setprecision(10)<<ans<<endl;

	}


	return 0;
}
	





