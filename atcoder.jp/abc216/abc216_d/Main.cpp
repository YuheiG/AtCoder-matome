#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main(){

	bitset<2000000> flag;
	int n,m;
	cin>>n>>m;
	vector<int> k(m);
	vector<queue<int>> ball(m);

	queue<int> start_list;
	vector<vector<int>> ball_list(n,vector<int>(2,-1));

	rep(i,m){
		cin>>k.at(i);
		rep(j,k.at(i)){

			int a;
			cin>>a;
			a--;
			if(ball_list.at(a).at(0)==-1){
				ball_list.at(a).at(0)=i;
			}else{
				ball_list.at(a).at(1)=i;
			}
			ball.at(i).push(a);
			if(j==0){
				if(flag.test(a)){
					start_list.push(a);
					flag.set(a,0);
				}else{
					flag.set(a,1);
				}
				
			}
		}
	}

	//cout<<flag<<endl;
	int cc=0;
	while(!start_list.empty()){
		
		cc++;
		int a=start_list.front();
		start_list.pop();

		int nb1,nb2;
		nb1=ball_list.at(a).at(0);
		nb2=ball_list.at(a).at(1);

		//cout<<nb1<<" "<<nb2<<endl;

		ball.at(nb1).pop();
		ball.at(nb2).pop();

		int nbc1,nbc2;
		if(!ball.at(nb1).empty()){
			nbc1=ball.at(nb1).front();

			if(flag.test(nbc1))start_list.push(nbc1);
			flag.flip(nbc1);
		}
		if(!ball.at(nb2).empty()){
			nbc2=ball.at(nb2).front();

			if(flag.test(nbc2))start_list.push(nbc2);
			flag.flip(nbc2);
		}
	}

	if(cc==n){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}

	return 0;
}
	





