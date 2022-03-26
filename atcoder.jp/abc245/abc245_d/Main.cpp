#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;



int main(){
	
	int n,m;
	cin>>n>>m;
	vector<int> a(n+1),b(m+1),c(n+m+1);

	rep(i,n+1)cin>>a.at(i);
	rep(i,n+m+1)cin>>c.at(i);
	reverse(a.begin(), a.end());
	reverse(c.begin(), c.end());


	rep(i,m+1){
		b.at(i)=c.at(i)/a.at(0);
		for(int j=1;j<n+1;j++){
			c.at(i+j)-=a.at(j)*b.at(i);
		}

	}
	reverse(b.begin(), b.end());
	rep(i,m+1)cout<<b.at(i)<<" ";
	cout<<endl;
	


    return 0;
}