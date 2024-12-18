#include <bits/stdc++.h>
using namespace std;

// EX11 - 電卓をつくろう2 
int main() {
  int N, A;
  cin >> N >> A;
  string op;
  int B;
  // ここにプログラムを追記
  for(int i = 1;i <= N;i++){
    cin >> op >> B;
    if(op == "+"){
      A = A + B;
    }
    if(op == "-"){
      A = A - B;
    }
    if(op == "*"){
      A = A * B;
    }
    if(op == "/"){
      if(B == 0){
        cout << "error" << endl;
        break;
      }
      A = A / B;
    }
    cout << i << ":" <<  A << endl;
  }
}
