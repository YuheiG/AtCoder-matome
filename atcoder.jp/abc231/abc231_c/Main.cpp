#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main(){


	int n,q;
	cin>>n>>q;

	vector<int> a(n);

	rep(i,n)cin>>a.at(i);
	sort(a.begin(), a.end());

	rep(i,q){
		int x;
		cin>>x;

		int le=0,ri=n-1;
		int check;

		if(a.at(0)>=x){
			cout<<n<<endl;
			continue;
		}
		if(a.at(n-1)<x){
			cout<<"0"<<endl;
			continue;
		}

		while(le!=ri-1){

			//cout<<le<<" "<<ri<<endl;

			check=(le+ri)/2;
			if(a.at(check)>=x){
				ri=check;
			}else{
				le=check;
			}

		}

		int ans=n-ri;

		cout<<ans<<endl;


	}



	return 0;
}
	





