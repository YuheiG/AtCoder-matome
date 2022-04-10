#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;



int main(){

	int n,m;
	cin>>n>>m;
	map<int,int> pasta;

	rep(i,n){
		int a;
		cin>>a;
		if(pasta.find(a)==pasta.end()){
			pasta.insert(make_pair(a,1));
		}else{
			pasta.at(a)++;
		}
	}

	rep(i,m){
		int a;
		cin>>a;
		if(pasta.find(a)==pasta.end()){
			cout<<"No"<<endl;
			return 0;
		}else{
			if(pasta.at(a)==1){
				pasta.erase(a);
			}else{
				pasta.at(a)--;
			}
		}
	}

	cout<<"Yes"<<endl;



    return 0;
		
}