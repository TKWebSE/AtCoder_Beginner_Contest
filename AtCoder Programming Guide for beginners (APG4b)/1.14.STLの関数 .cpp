#include <bits/stdc++.h>
using namespace std;

// EX14 - 三人兄弟の身長差 
int main() {
  int A, B, C;
  cin >> A >> B >> C;

  int maxHeight = max(A,max(B,C)); 
  int minHeight = min(A,min(B,C));

  cout << maxHeight - minHeight << endl;
}
