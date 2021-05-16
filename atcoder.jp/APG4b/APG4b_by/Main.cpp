#include <bits/stdc++.h>
using namespace std;

struct Clock{
  int hour;
  int minute;
  int second;
  void set(int h,int m,int s){
    hour=h;
    minute=m;
    second=s;
  }
  string to_str(void){
    string time="00000000",suji="0123456789";
    time.at(0)=suji.at(hour/10);
    time.at(1)=suji.at(hour%10);
    time.at(2)=':';
    time.at(3)=suji.at(minute/10);
    time.at(4)=suji.at(minute%10);
    time.at(5)=':';
    time.at(6)=suji.at(second/10);
    time.at(7)=suji.at(second%10);
    return time;
  }
  void shift(int diff_second){
    second+=diff_second;
    while(second<0){
      second+=60;
      minute--;
    }
    while(minute<0){
      minute+=60;
      hour--;
    }
    while(hour<0){
      hour+=24;
    }
    while(second>=60){
      second-=60;
      minute++;
    }
    while(minute>=60){
      minute-=60;
      hour++;
    }
    while(hour>=24){
      hour-=24;
    }
  }
};

int main() {
  // 入力を受け取る
  int hour, minute, second;
  cin >> hour >> minute >> second;
  int diff_second;
  cin >> diff_second;

  // Clock構造体のオブジェクトを宣言
  Clock clock;

  // set関数を呼び出して時刻を設定する
  clock.set(hour, minute, second);

  // 時刻を出力
  cout << clock.to_str() << endl;

  // 時計を進める(戻す)
  clock.shift(diff_second);

  // 変更後の時刻を出力
  cout << clock.to_str() << endl;
}