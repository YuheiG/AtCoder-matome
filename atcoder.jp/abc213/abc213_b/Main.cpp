#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int> >;


int main(){
	int n;
	cin>>n;
	vector<pair<ll,int>> a;
	rep(i,n){
		ll A;
		cin>>A;
		a.push_back(make_pair(A,i));
	}

	sort(a.begin(),a.end());
	cout<<a.at(n-2).second+1<<endl;



	return 0;
}