#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main(){

	int n,q;
	cin>>n>>q;
	map<int,int> position;
	vector<int> ball(n);

	rep(i,n){
		ball.at(i)=i;
		position.insert(make_pair(i,i));
	}

	rep(i,q){
		int x;
		cin>>x;
		x--;
		int p=position.at(x);
		if(p==(n-1)){
			swap(ball.at(n-2),ball.at(n-1));
			swap(position.at(ball.at(n-1)),position.at(ball.at(n-2)));
		}else{
			swap(ball.at(p+1),ball.at(p));
			swap(position.at(ball.at(p+1)),position.at(ball.at(p)));
		}
	}

	rep(i,n){
		int ans=ball.at(i)+1;
		cout<<ans<<endl;
	}


	return 0;

}

