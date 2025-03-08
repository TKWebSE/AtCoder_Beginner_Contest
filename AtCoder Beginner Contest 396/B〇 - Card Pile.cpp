#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (n);i++)

int main() {
  string ans = "";
  int n = 0;
  cin >> n;
  vector deck (100,0);
  int deckTop = 99;

  rep(i,n){
    int Magic;
    cin >> Magic;
    if(Magic == 1){
      int x;
      cin >> x; 
      deck.push_back(x);
      deckTop++;
    }else{
      cout << deck[deckTop] << endl;
      deck.erase(deck.end() - 1);
      deckTop--;
    }
  }

  return 0;
}
