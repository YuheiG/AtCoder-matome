#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;


int main(){
	
	int n;
	stack<pair<int,int>> sta;
	cin>>n;
	rep(i,n){
		
		int a;
		cin>>a;
		if(sta.size()==0){
			sta.push(make_pair(a,1));
			cout<<"1"<<endl;
			continue;
		}
		int c=sta.top().second;
		int num=sta.top().first;

		if(a==num){
			c++;
		}else{
			c=1;
		}
		sta.push(make_pair(a,c));

		if(a==c)rep(j,a)sta.pop();

		cout<<sta.size()<<endl;
	}
	

    return 0;
}