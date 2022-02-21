#include <iostream>
using namespace std;

int main() {
  string S;
  cin >> S;

  int N = S.size();
  string T = "";

  int i = N - 1;
  while(true){
    if (S[i] == 'r'){
       // dreamer or eraser
       if(S[i-2] == 'm'){
         T.insert(0, "dreamer");
         i -= 7;
       } else {
         T.insert(0, "eraser");
         i -= 6;
       }
    } else if (S[i] == 'm'){
      //dream
      T.insert(0, "dream");
      i -= 5;
    } else if (S[i] == 'e'){
      //erase
      T.insert(0, "erase");
      i -= 5;
    } else {
      break;
    }

    if(i <= 0){
      break;
    }

  }
  if(S == T){
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
