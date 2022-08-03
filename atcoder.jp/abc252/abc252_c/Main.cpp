#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main() {
	
	int n;
	cin>>n;
	vector<map<int,int>> s(n);

	rep(i,n){
		string str;
		cin>>str;
		rep(j,10){
			s.at(i).insert(make_pair(str.at(j)-48,j));
		}
	}

	int ans=1000000;

	rep(tagget,10){
		vector<int> time(10,0);
		rep(i,n){
			time.at(s.at(i).at(tagget))++;
		}

		int maxtime=0,maxturn=0;
		rep(i,10){
			if(time.at(i)>maxturn){
				maxturn=time.at(i);
				maxtime=i;
			}else if(time.at(i)==maxturn&&i>maxtime){
				maxtime=i;
			}
		}
		//cout<<"tagget="<<tagget<<endl;
		//cout<<maxturn<<" "<<maxtime<<endl;
		ans=min(ans,(maxturn-1)*10+maxtime);
		//cout<<ans<<endl;

	}
	cout<<ans<<endl;


	return 0;
}


