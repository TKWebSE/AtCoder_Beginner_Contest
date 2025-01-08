#include <bits/stdc++.h>
using namespace std;

// EX12 - 足したり引いたり
int main() {
  string S;
  cin >> S;

  // ここにプログラムを追記
  int answer = 1;
  int i = 1;
  int Size = S.size();
  string op = "";

  while(Size > i){
    op = S.at(i);
    if(op == "+"){
      answer++;
    }
    if(op == "-"){
      answer--;
    }

    i = i+ 2;
  }
  cout << answer << endl;
}
