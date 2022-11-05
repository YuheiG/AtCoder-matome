#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;
deque<ll> list1;

int main() {

	multiset<ll> mSet;
	int q;
	cin>>q;

	rep(i,q){
		int que;
		cin>>que;
		if(que==1){
			ll x;
			cin>>x;
			mSet.insert(x);
		}else if(que==2){
			ll x;
			int c;
			cin>>x>>c;
			while(c!=0){
				if(mSet.find(x)==mSet.end()){
					break;
				}else{
					mSet.erase(mSet.find(x));
					c--;
				}
			}
		}else{
			cout<<*mSet.rbegin()-*mSet.begin()<<endl;
		}
	}	
	
	return 0;
}


