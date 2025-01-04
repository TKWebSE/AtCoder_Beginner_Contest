#include <bits/stdc++.h>
using namespace std;

// EX1 - コードテストと出力の練習
int main() {
  int X = 0;
  int answer = 0;
  cin >> X;
  
  int A = 0;
  for(int i = 1;i < 10;i++){
    for(int j = 1;j < 10;j++){
      A = i * j;
      if(X != A){
        answer += A;
      }
    }
  }

  cout << answer << endl;
}
