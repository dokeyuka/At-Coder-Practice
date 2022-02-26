#include <iostream>
#include <string>

using namespace std;

int main () {
  string S;
  cin >> S;
 // cout << S;
  for (int b = 0; b < (1 << 3); ++b)
  {
    //cout << b << endl;
    int ans = S[0] - '0';
    for (int i = 0; i < 3; i++)
    {

      if(b & (1 << i)){
        ans += S[i + 1] - '0';
        cout << ans << endl;
      }
      else
      {
        ans -=  S[i + 1] - '0';
      }
    }

    if(ans == 7){
      cout << S[0];
      for (int i = 0; i < 3; i++){
        if(b & (1 << i)){
          cout << '+';
        }
        else{
          cout << '-';
        }
        cout << S[i + 1];
      }
      cout << "=7" << endl;

    }
  }



}
