#include <bits/stdc++.h>
using namespace std;

// EX12 - 足したり引いたり
int main() {
  string S;
  cin >> S;

  // ここにプログラムを追記
  int answer = 0;
  int i = 1;
  int Size = S.size();
  while(Size < i){
    if(S.at(i) == "+"){
      answer++;
    }
    if(S.at(i) == "-"){
      answer--;
    }
    i =+ 2;
  }
  cout << answer << endl;
}
