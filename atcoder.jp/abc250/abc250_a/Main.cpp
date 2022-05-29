#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;


int main(){

	int h,w,r,c;
	cin>>h>>w>>r>>c;

	int ans=4;
	if(h==1)ans--;
	if(w==1)ans--;
	if(r==1||r==h)ans--;
	if(c==1||c==w)ans--;
	

	cout<<ans<<endl;

	return 0;

}

