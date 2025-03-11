#include <bits/stdc++.h>
using namespace std;

int main() {
  string answer ="No";
  int a = 0;
  int b = 0;
  int c = 0;
  cin >> a >> b >> c;

  // a最初パターン
  if(a * b == c){
    answer ="Yes";
  }
  if(a * c ==b){
    answer ="Yes";
  }

  // b最初パターン
  if(b * a == c){
    answer ="Yes";
  }
  if(b * c == a){
    answer ="Yes";
  }

  // c最初パターン
  if(c * a == b){
    answer ="Yes";
  }
  if(c* b == a){
    answer ="Yes";
  }
  
  cout << answer << endl;
}
