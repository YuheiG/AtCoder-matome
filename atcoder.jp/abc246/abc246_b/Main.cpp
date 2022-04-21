#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;


int main(){

	int a,b;
	cin>>a>>b;
	if(a==0){
		cout<<0.0<<" "<<1.0<<endl;
		return 0;
	}

	double shita=atan2(b*1.0,a*1.0);

	double x=cos(shita),y=sin(shita);

	cout<<fixed<<setprecision(10)<<x<<" "<<y<<endl;


	return 0;
}