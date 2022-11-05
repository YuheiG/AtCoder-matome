#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main() {
	ll waru =998244353;
	int n,m,k;
	cin>>n>>m>>k;

	ll mapList[n][m];

	rep(i,n){
		rep(j,m){
			if(i==0){
				mapList[i][j]=1;
			}else{
				mapList[i][j]=0;
			}
		}
		if(i==0)continue;
		ll ban=0;
		ll sum=0;
		rep(j,k){
			ban+=mapList[i-1][j];
		}

		rep(j,m){
			sum+=mapList[i-1][j];
		}
		rep(j,m){
			//cout<<"i="<<i<<" j="<<j<<" ban="<<ban<<" sum"<<sum<<endl;
			mapList[i][j]=(sum-ban)%waru;
			if(j+1-k>=0){
				ban-=mapList[i-1][j+1-k];
			}
			if(j+k<m){
				ban+=mapList[i-1][j+k];
			}
		}
	}
	ll ans=0;
	rep(i,m){
		ans+=mapList[n-1][i];
		ans%=waru;
	}

	cout<<ans<<endl;



	return 0;
}



