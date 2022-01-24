#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main(){

	int h,w,hn,wn;
	cin>>h>>w;

	if(h==1||w==1){
		cout<<h*w<<endl;
	}else{
		hn=h/2;
		wn=w/2;
		if(h%2==1)hn++;	
		if(w%2==1)wn++;
		cout<<wn*hn<<endl;	
	}
	

    return 0;
}