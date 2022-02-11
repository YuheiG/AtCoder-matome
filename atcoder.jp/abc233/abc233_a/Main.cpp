#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;


int main(){

	int x,y;
	cin>>x>>y;
	int value=x,ans=0;
	while(y>value){
		value+=10;
		ans++;
	}
	cout<<ans<<endl;
    return 0;
}