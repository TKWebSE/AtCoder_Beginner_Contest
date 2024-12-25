#include <bits/stdc++.h>
using namespace std;

// EX16 - 隣り合う同じ値を探す 
int main() {
  vector<int> data(5);
  for (int i = 0; i < 5; i++) {
    cin >> data.at(i);
  }

  // dataの中で隣り合う等しい要素が存在するなら"YES"を出力し、そうでなければ"NO"を出力する
  // ここにプログラムを追記
  bool answer = false;
  for(int i = 0;i < data.size()-1;i++){
    if(data.at(i) == data.at(i+1)){
      answer = true;
    }
  }

  if(answer){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }
}
