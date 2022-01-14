#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;



int main(){
	int n,m;
	cin>>n>>m;
	if(m==0){
		cout<<"Yes"<<endl;
		return 0;
	}
	
	vector<pair<int,int>> aoki(m),taka(m);

	
	rep(i,m){
		int a,b;
		cin>>a>>b;
		a--;b--;
		taka.at(i)=make_pair(a,b);			
	}

	rep(i,m){
		int a,b;
		cin>>a>>b;
		a--;b--;
		aoki.at(i)=make_pair(a,b);			
	}

	vector<int>	aokin(n);
	rep(i,n)aokin.at(i)=i;
	
	do{
		/*cout<<"------------"<<endl;
		rep(i,n)cout<<i<<" ";
		cout<<endl;
		rep(i,n)cout<<aokin.at(i)<<" ";
		cout<<endl;
*/
		
		bool ans;
		rep(i,m){
			int a,b;
			a=taka.at(i).first;
			b=taka.at(i).second;
			bool chekingman=false;
			rep(j,m){
				int c,d;
				c=aoki.at(j).first;
				d=aoki.at(j).second;
				c=aokin.at(c);
				d=aokin.at(d);
				//cout<<"("<<a<<","<<b<<")-("<<c<<","<<d<<")"<<endl;
				if(a==c&&b==d){
					chekingman=true;
					break;
				}
				if(a==d&&b==c){
					chekingman=true;
					break;
				}
			}
			if(chekingman){
				ans=true;
			}else{
				ans=false;
				break;
			}	
		}

		if(ans){
			cout<<"Yes"<<endl;
			return 0;
		}

	}while(next_permutation(aokin.begin(), aokin.end()));

	

	cout<<"No"<<endl;
    return 0;
}




