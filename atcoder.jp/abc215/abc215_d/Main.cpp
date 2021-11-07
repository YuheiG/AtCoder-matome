#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

set<int> plist;
void sosu(int x){
	for(int i=2;i<sqrt(x)+1;i++){
		if(x%i==0){
			plist.insert(i);
			while(x%i==0){
				x/=i;
			}
		}
	}
	plist.insert(x);
	return;
}

int main() {

	int n,m;
	cin>>n>>m;
	vector<int> a(n);
	rep(i,n)cin>>a.at(i);

	plist.insert(1);


	rep(i,n)sosu(a.at(i));

	vector<bool> ans(100005,true);

	for(int i=2;i<m+1;i++){
		if(plist.find(i)!=plist.end()){
			for(int j=1;i*j<=m;j++){
				ans.at(i*j)=false;
			}
		}
	}
	
	queue<int> fa;
	for(int i=1;i<=m;i++){
		if(ans.at(i))fa.push(i);
	}

	cout<<fa.size()<<endl;
	while(!fa.empty()){
		cout<<fa.front()<<endl;
		fa.pop();
	}

    return 0;
}