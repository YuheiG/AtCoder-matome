#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;


int main(){

	int n,k;
	cin>>n>>k;
	

	vector<vector<bool>> moji(n,vector<bool>(27,false));

	rep(i,n){
		string s;
		cin>>s;
		rep(j,s.size())moji.at(i).at(s.at(j)-97)=true;
	}

	int ans=-1;
	for(int bit=0;bit<(1<<n);++bit){
		bitset<16> b(bit);
		int cnt=0;
		vector<int> same(27,0);

		rep(i,n){
			if(b.test(i)){
				rep(j,26){
					if(moji.at(i).at(j)){
						same.at(j)++;
					}
				}
			}
		}

		rep(i,26)if(same.at(i)==k)cnt++;

		ans=max(ans,cnt);
		
		
		
	}

	cout<<ans<<endl;
	return 0;

}

