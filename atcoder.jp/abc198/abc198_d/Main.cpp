#include <bits/stdc++.h>
using namespace std;

int main(){
  string s1,s2,s3;
  cin>>s1>>s2>>s3;
  map<char,int> mozi;
  vector<int> chalist;
  int s1_n=s1.size(),s2_n=s2.size(),s3_n=s3.size();
  
  for(int i=0;i<s1.size();i++){
    if(mozi.count(s1.at(i))==0){
      mozi.insert(make_pair(s1.at(i),-1));
      chalist.push_back(s1.at(i));
    }
  }
  for(int i=0;i<s2.size();i++){
    if(mozi.count(s2.at(i))==0){
      mozi.insert(make_pair(s2.at(i),-1));
      chalist.push_back(s2.at(i));
    }
  }
  for(int i=0;i<s3.size();i++){
    if(mozi.count(s3.at(i))==0){
      mozi.insert(make_pair(s3.at(i),-1));
      chalist.push_back(s3.at(i));
    }
  }
 
  if(mozi.size()>10){
    cout<<"UNSOLVABLE"<<endl;
    return 0;
  }
  int mozi_n=mozi.size();

  vector<int> use_suzi;
  int64_t ans1,ans2,ans3;
  for(int i=1;i<(1<<10);i++){
    bitset<10> use_n(i);
    if(use_n.count()!=mozi_n)continue;
    use_suzi.clear();
    for(int j=0;j<10;j++){
      if(use_n.test(j))use_suzi.push_back(j);
    }
    do{
     // for(int j=0;j<use_suzi.size();j++)cout<<use_suzi.at(j)<<" ";
     // cout<<endl;
      mozi.clear();
      for(int i=0;i<chalist.size();i++){
        mozi.insert(make_pair(chalist.at(i),use_suzi.at(i)));
      }
      ans1=0;
      ans2=0;
      ans3=0;
      if(mozi.at(s1.at(0))==0)continue;
      if(mozi.at(s2.at(0))==0)continue;
      if(mozi.at(s3.at(0))==0)continue;
      for(int i=0;i<s1_n;i++)ans1+=pow(10,s1_n-1-i)*mozi.at(s1.at(i));
      for(int i=0;i<s2_n;i++)ans2+=pow(10,s2_n-1-i)*mozi.at(s2.at(i));
      for(int i=0;i<s3_n;i++)ans3+=pow(10,s3_n-1-i)*mozi.at(s3.at(i));
     // cout<<ans1<<"+"<<ans2<<"="<<ans3<<endl;
      if(ans1+ans2==ans3){
        cout<<ans1<<endl;
        cout<<ans2<<endl;
        cout<<ans3<<endl;
        return 0;
      }
    }while(next_permutation(use_suzi.begin(),use_suzi.end()));
   // cout<<"------------------"<<endl;
  }
   cout<<"UNSOLVABLE"<<endl;
}
  
  
  
  