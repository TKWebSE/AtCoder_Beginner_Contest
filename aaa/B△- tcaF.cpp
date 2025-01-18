#include <bits/stdc++.h>
using namespace std;

int main() {
  long X=0;
  long answer = 1;
  int kaijo = 1;
  cin >> X;

  while(X != answer){
    answer = 1;
    kaijo++;
    // cout << answer << endl;
    for(int i = kaijo;i > 1;i--){
      answer = answer * i;
      // cout << i << endl;
      // cout << X << ":" <<answer << endl;
      // cout << "--------" << endl;
    }
  }

  cout << kaijo << endl;
}
