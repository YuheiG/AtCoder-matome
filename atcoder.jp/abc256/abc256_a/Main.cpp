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

int main() {
	int n;
	cin>>n;
	ll ans=1;
	rep(i,n)ans*=2;
	cout<<ans<<endl;
	return 0;
}

