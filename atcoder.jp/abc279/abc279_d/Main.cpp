#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
#define pb push_back
#define mp make_pair
#define ft first
#define sd second
template<class T> using V = std::vector<T>;

using namespace std;
using Graph = vector<vector<int>>;
ll a,b;

double getTime(ll g){
	return (double)a/sqrt((double)g)+(double)b*((double)g-1.);
}

int main() {
	cin>>a>>b;

	double g=pow((double)a/(2.*b),2./3.);
	vector<ll> ans;
	rep(i,7){
		ll time =g*1-3+i;
		if(time>=1)ans.pb(time);
	}
	double ansTime=DBL_MAX;
	rep(i,ans.size()){
		ansTime=min(getTime(ans.at(i)),ansTime);
	}
	cout<<fixed<<setprecision(10)<<ansTime<<endl;



}

