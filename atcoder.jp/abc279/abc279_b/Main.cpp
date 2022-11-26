#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
#define pb push_back
#define mp make_pair
#define ft first
#define sd second
template<class T> using V = std::vector<T>;

using namespace std;
using Graph = vector<vector<int>>;

int main() {
	string s,t;
	cin>>s>>t;
	int sS=s.size();
	int tS=t.size();
	if(sS<tS){
		cout<<"No"<<endl;
		return 0;
	}
	rep(i,sS-tS+1){
		bool flag=true;
		rep(j,tS){
			if(s.at(i+j)!=t.at(j)){
				flag=false;
				break;
			} 
		}
		if(flag){
			cout<<"Yes"<<endl;
			return 0;
		}
	}
	cout<<"No"<<endl;
	return 0;
	
}
