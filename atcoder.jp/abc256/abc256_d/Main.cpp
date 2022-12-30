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
	int n;
	cin>>n;
	vector<pair<int,int>> range(n);

	rep(i,n){
		int l,r;
		cin>>l>>r;
		range.at(i)=make_pair(l,r);
	}
	sort(range.begin(),range.end());

	int left=0,right=0;
	rep(i,n){
		if(i==0){
			left=range.at(i).first;
			right=range.at(i).second;
			continue;
		}
		if(right>=range.at(i).first){
			right=max(right,range.at(i).second);
		}else{
			cout<<left<<" "<<right<<endl;
			left=range.at(i).first;
			right=range.at(i).second;
		}
	}
	cout<<left<<" "<<right<<endl;
    return 0;
}
