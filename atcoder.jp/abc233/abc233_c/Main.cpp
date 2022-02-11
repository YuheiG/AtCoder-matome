#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;


int main(){

	int n;
	ll x;
	cin>>n>>x;
	vector<int> L(n);
	vector<vector<ll>> a(n);

	rep(i,n){
		cin>>L.at(i);
		rep(j,L.at(i)){
			int A;
			cin>>A;
			a.at(i).push_back(A);
		}
	}

	queue<ll> que;
	rep(i,n){
		if(i==0){
			rep(j,L.at(i)){
				que.push(a.at(i).at(j));
			}
			continue;
		}
		int que_size=que.size();
		rep(j,que_size){
			ll que_t=que.front();
			que.pop();
			rep(k,L.at(i)){
				ll push_n=a.at(i).at(k)*que_t;
				if(push_n<=x)que.push(push_n);
			}
		}
	}
	ll ans=0;
	while(!que.empty()){
		if(que.front()==x)ans++;
		que.pop();
	}
	cout<<ans<<endl;



    return 0;
}