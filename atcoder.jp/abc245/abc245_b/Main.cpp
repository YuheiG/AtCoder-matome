#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;


int main(){
	
	int n;
	cin>>n;
	int ans=-1;
	int cc=0;
	vector<int> a(n);
	rep(i,n)cin>>a.at(i);

	sort(a.begin(),a.end());


	rep(i,n){
		if(cc==a.at(i)){
			cc++;
			continue;
		}else if(cc<a.at(i)){
			ans=cc;		
		}
		if(ans!=-1)break;
	}
	if(ans==-1)ans=cc;
	cout<<ans<<endl;
    return 0;
}