#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int> >;

int main(){
  ll waru=pow(10,9)+7;
  string s;
  cin>>s;
  vector<ll> num(10,0);//null->0 c->1 ....
  num.at(0)=1;
  ll ans=0;
  rep(i,s.size()){
    if(s.at(i)=='c'){num.at(1)+=num.at(0);
    }else if(s.at(i)=='h'){num.at(2)+=num.at(1);
    }else if(s.at(i)=='o'){num.at(3)+=num.at(2);
    }else if(s.at(i)=='k'){num.at(4)+=num.at(3);
    }else if(s.at(i)=='u'){num.at(5)+=num.at(4);
    }else if(s.at(i)=='d'){num.at(6)+=num.at(5);
    }else if(s.at(i)=='a'){num.at(7)+=num.at(6);
    }else if(s.at(i)=='i'){num.at(8)+=num.at(7);
    }
    for(int j=1;j<9;j++)num.at(j)%=waru;       
  }
  cout<<num.at(8)<<endl;
}