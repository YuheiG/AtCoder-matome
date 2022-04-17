#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main(){
	

	int n;
	cin>>n;
	vector<vector<ll>> g(n,vector<ll>(10,0));
	ll waru =998244353;

	rep(i,9)g.at(0).at(i)=1;
	for(int i=1;i<n;i++){		
		rep(j,9){
			if(j==0){
				g.at(i).at(j)=g.at(i-1).at(0)+g.at(i-1).at(1);
			}else if(j==8){
				g.at(i).at(j)=g.at(i-1).at(7)+g.at(i-1).at(8);
			}else{
				g.at(i).at(j)=g.at(i-1).at(j-1)+g.at(i-1).at(j)+g.at(i-1).at(j+1);
			}
			g.at(i).at(j)%=waru;
			
		}
	}

	ll ans=0;
	rep(i,9)ans+=g.at(n-1).at(i);
	ans%=waru;
	cout<<ans<<endl;

		
}