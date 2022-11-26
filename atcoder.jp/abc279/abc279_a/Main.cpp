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
	string str;
	cin>>str;
	int ans=0;
	rep(i,str.size()){
		if(str.at(i)=='v'){
			ans++;
		}else{
			ans+=2;
		}
	}
	cout<<ans<<endl;

	return 0;
}
