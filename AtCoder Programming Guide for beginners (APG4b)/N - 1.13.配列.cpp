#include <bits/stdc++.h>
using namespace std;

//EX13 - 平均との差 
int main() {
  int N;
  cin >> N;
  vector<int> point(N);
  vector<int> farPoint(N);
  int average = 0;
  // 標準入力を受け取り、格納する
  for(int i = 0;i < N;i++){
    cin >> point.at(i);
    average =+ point.at(i);
  }
  
  // 平均点から何点離れてるかを計算する
  average = average / N;
  for(int i = 0;i < N;i++){
    if(average < point.at(i)){
      farPoint.at(i) = point.at(i) - average;
    }else{
      farPoint.at(i) = point.at(i) + average;
    }
  }
}
