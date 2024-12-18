#include <bits/stdc++.h>
using namespace std;

// EX10 - 棒グラフの出力
int main() {
  int A, B;
  cin >> A >> B;
  string aBorder = "A:";
  string bBorder = "B:";
  int i = 0;

  // ここにプログラムを追記
  while(i < A){
    aBorder += "]";
    i++;
  }

  i = 0;
   while(i < B){
    bBorder += "]";
    i++;
  }

  cout << aBorder << endl;
  cout << bBorder << endl;
}
