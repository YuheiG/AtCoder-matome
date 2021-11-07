#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

pair<int,int> uqf;
set<pair<int,int>> mag;
void uq(int x,int y){
	int maina=1;
	if(y<0)maina=-1;
	y=abs(y);

	int a=x,b=y,r;
	if(a<b)swap(a,b);
	r=a%b;
	while(r!=0){
		a=r;
		swap(a,b);
		r=a%b;
	}
	uqf=make_pair(x/b,maina*y/b);
	return ;

}

int main() {
	int n;
	cin>>n;
	vector<int> x(n),y(n);
	rep(i,n)cin>>x.at(i)>>y.at(i);

	rep(i,n){
		for(int j=0;j<i;j++){
			int dx,dy;
			dx=x.at(i)-x.at(j);
			dy=y.at(i)-y.at(j);
			if(dx==0){
				mag.insert(make_pair(0,1));
				continue;
			}
			if(dy==0){
				mag.insert(make_pair(1,0));
				continue;
			}

			if((dx<0&&dy<0)||(dx>0&&dy>0)){
				dx=abs(dx);
				dy=abs(dy);
			}else{
				dx=abs(dx);
				dy=-1*abs(dy);
			}
			uq(dx,dy);
			mag.insert(uqf);
		}
	}

	int ans=2*mag.size();
	cout<<ans<<endl;

    return 0;
}

