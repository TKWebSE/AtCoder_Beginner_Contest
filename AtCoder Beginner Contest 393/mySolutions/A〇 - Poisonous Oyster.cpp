#include <bits/stdc++.h>
using namespace std;

int main() {
  string Takahashi = "";
  string Aoki = "";
  cin >> Takahashi >> Aoki;
  const string SICK = "sick";
  const string FINE = "fine";
  int answer = 0;

  // 1
  if(Takahashi == SICK && Aoki == SICK){
    answer = 1;
  }

  // 2
  if(Takahashi == SICK && Aoki != SICK){
    answer = 2;
  }

  // 3
  if(Takahashi != SICK && Aoki == SICK){
    answer = 3;
  }

  // 4
  if(Takahashi != SICK && Aoki != SICK){
    answer = 4;
  }

  cout << answer << endl;
}
