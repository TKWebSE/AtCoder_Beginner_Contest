#include <bits/stdc++.h>
using namespace std;

int main() {
  string answer ="";
  string hougaku = "";
  cin >> hougaku;

  // 東西南北
  if(hougaku == "N"){
    answer = "S";
  }
  if(hougaku == "E"){
    answer = "W";
  }
  if(hougaku == "W"){
    answer = "E";
  }
  if(hougaku == "S"){
    answer = "N";
  }

  // ななめ
  if(hougaku == "NE"){
    answer = "SW";
  }
  if(hougaku == "NW"){
    answer = "SE";
  }
  if(hougaku == "SE"){
    answer = "NW";
  }
  if(hougaku == "SW"){
    answer = "NE";
  }

  cout << answer << endl;
}
