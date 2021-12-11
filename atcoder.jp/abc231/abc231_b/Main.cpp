#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main(){


	int n;
	cin>>n;
	vector<string> name(n);

	rep(i,n)cin>>name.at(i);

	string ans;
	int maxn=-1;

	rep(i,n){
		int cc=0;
		rep(j,n){
			if(name.at(i)==name.at(j))cc++;
		}

		if(maxn<cc){
			ans=name.at(i);
			maxn=cc;
		}
	}

	cout<<ans<<endl;



	return 0;
}
	





