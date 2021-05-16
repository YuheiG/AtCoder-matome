#include <bits/stdc++.h>
using namespace std;

int main(){
  deque<char> deq;
  string s;
  int c=1,deqsize=0;
  cin>>s;
  for(int i=0;i<s.size();i++){
    if(s.at(i)=='R'){
      c*=-1;
    }else{
      if(deqsize==0){
        deq.push_back(s.at(i));
        deqsize++;
        continue;
      }
      if(c==1){
        if(s.at(i)==deq.at(deqsize-1)){
          deq.erase(deq.end());
          deqsize--;
        }else{
          deq.push_back(s.at(i));
          deqsize++;
        }
      }else{
        if(s.at(i)==deq.at(0)){
          deq.erase(deq.begin());
          deqsize--;
        }else{
          deq.push_front(s.at(i));
          deqsize++;
        }

      }
    }
  }
  if(c==1){
    for(int i=0;i<deqsize;i++){
      cout<<deq.at(i);
    }
    cout<<endl;
  }else{
    for(int i=0;i<deqsize;i++){
      cout<<deq.at(deqsize-i-1);
    }
    cout<<endl;
  }
  
}