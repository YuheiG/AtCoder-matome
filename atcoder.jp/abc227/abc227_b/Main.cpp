#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;




int main(){

	set<int> s;
	int n;
	cin>>n;

	rep(i,335){
		if(i==0)continue;
		rep(j,335){
			if(j==0)continue;
			int sum;
			sum=4*i*j+3*i+3*j;
			s.insert(sum);
		}
	}

	int num=0;
	rep(i,n){
		int ans;
		cin>>ans;
		if(s.find(ans)==s.end())num++;
	}

	cout<<num<<endl;

    return 0;
}




