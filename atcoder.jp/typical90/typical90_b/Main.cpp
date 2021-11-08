#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main() {
	int n;
	cin>>n;
	if(n%2==1)return 0;

	for(int i=0;i<(1<<n);i++){
		bitset<1000> s(i);
		if(s.count()!=n/2)continue;
		int l=0,r=0;

		bool skip=false;
		rep(j,n){
			if(s.test(j)){
				l++;
			}else{
				r++;
				if(r>l){
					skip=true;
					break;
				}
			}
		}
		if(skip)continue;

		rep(j,n){
			if(s.test(n-1-j)){
				cout<<")";
			}else{
				cout<<"(";
			}
		}
		cout<<endl;

	}

    return 0;
}
