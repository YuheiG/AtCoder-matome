#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int> >;

int pp(int x){
	if(x==9){
		return 0;
	}else{
		x++;
		return x;
	}
}

int main(){
	int x[5],X;
  cin>>X;
	x[0]=X/1000;
	X%=1000;
	x[1]=X/100;
	X%=100;
	x[2]=X/10;
	X%=10;
	x[3]=X;

	if(x[0]==x[1]&&x[1]==x[2]&&x[2]==x[3]){
		cout<<"Weak"<<endl;
	}else{
		if(x[1]==pp(x[0])&&x[2]==pp(x[1])&&x[3]==pp(x[2])){
			cout<<"Weak"<<endl;
		}else{
			cout<<"Strong"<<endl;
		}


	}

	return 0;
}

