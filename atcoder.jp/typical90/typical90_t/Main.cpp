#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;



int main(){

	ll a,b,c;
	ll bcpow=1;
	cin>>a>>b>>c;

	rep(i,b)bcpow*=c;

	if(a<bcpow){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}







	return 0;
}
	





