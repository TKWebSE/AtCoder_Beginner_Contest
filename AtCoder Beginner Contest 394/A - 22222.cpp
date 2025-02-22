#include <bits/stdc++.h>
using namespace std;

int main() {
  string S = "";
  string ans = "";
  cin >> S;
  int Slength = S.size();

  for(int i = 0;i < Slength;i++){
    char N = S.at(i);
    if(N == '2'){
      ans += "2";
    }
  }
  
  cout << ans << endl;
}
