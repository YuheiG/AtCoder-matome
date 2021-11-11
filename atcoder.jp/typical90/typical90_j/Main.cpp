#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

vector<int> sum_l1,sum_l2,sum_r1,sum_r2;
int n;

int sum(int cn,int l,int r){
	int ans;
	if(cn==1){
		ans=sum_l1.at(r)+sum_r1.at(l)-sum_l1.at(n-1);
	}else{
		ans=sum_l2.at(r)+sum_r2.at(l)-sum_l2.at(n-1);
	}
	return ans;
}

int main(){

	cin>>n;
	vector<int> c1(n),c2(n);

	sum_r2.assign(n,0);
	sum_r1.assign(n,0);
	sum_l2.assign(n,0);
	sum_l1.assign(n,0);

	int sum1=0,sum2=0;
	rep(i,n){
		int c;
		cin>>c;
		if(c==1){
			cin>>c1.at(i);
			c2.at(i)=0;
		}else{
			cin>>c2.at(i);
			c1.at(i)=0;
		}
		sum1+=c1.at(i);
		sum2+=c2.at(i);
		sum_l1.at(i)=sum1;
		sum_l2.at(i)=sum2;
	}
	sum1=0;
	sum2=0;

	rep(i,n){
		sum1+=c1.at(n-1-i);
		sum2+=c2.at(n-1-i);
		sum_r1.at(n-1-i)=sum1;
		sum_r2.at(n-1-i)=sum2;
	}


	int q;
	cin>>q;
	rep(i,q){
		int ans,l,r;
		cin>>l>>r;
		l--;
		r--;
		ans=sum(1,l,r);
		cout<<ans<<" ";
		ans=sum(2,l,r);
		cout<<ans<<endl;
	}

    return 0;
}




