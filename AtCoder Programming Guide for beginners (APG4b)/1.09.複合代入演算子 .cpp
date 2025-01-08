#include <bits/stdc++.h>
using namespace std;

// EX9 - 複合代入演算子を使おう
int main() {
  int x, a, b;
  cin >> x >> a >> b;

  // 1.の出力
  x++;
  cout << x << endl;

  // 2の出力
  x *= a + b;
  cout << x << endl;

  // 3の出力
  x *= x;
  cout << x << endl;

  // 4の出力
  x--;
  cout << x << endl;

}
