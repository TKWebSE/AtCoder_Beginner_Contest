#include <bits/stdc++.h>
using namespace std;

// エラーを解消できなかった
int main() {
  string S = 0;
  cin >> S;
  int answer = 0;
  int i = 0;
  int j = 0;
  int k = 0;
  int size = S.size();

  for(int x = 0;x < size;x++){
    
    if(S[x] == "A"){
      i = x;
      for(int y = x+1;y < size;y++){
        if(S[y] == "B"){
          j = y;
          k = j - i + j;
          if(S[k] == "C"){
            answer++;
          }
        }
      }
    }
  }

  cout << answer << endl;
}
