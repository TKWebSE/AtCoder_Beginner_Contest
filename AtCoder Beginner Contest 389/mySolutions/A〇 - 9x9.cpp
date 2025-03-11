#include <bits/stdc++.h>
using namespace std;

int main() {
  int S =0;
  int answer = 0;
  char A;
  char B;
  char C;
  cin >> A >> B >> C;

  int intA = int(A-'0');
  int intC = int(C-'0');

  // 計算する
  if(B == '+'){
   answer =  intA+ int(C-'0');
  }
  if(B == '-'){
   answer = int(A-'0') - int(C-'0');
  }
  if(B == 'x'){
   answer = intA * intC;
  }
  if(B == '/'){
   answer = int(A-'0') / int(C-'0');
  }

  // 答えを出力する
  cout << answer << endl;
}
