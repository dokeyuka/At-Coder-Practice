#include <iostream>

using namespace std;


int main(){
  int N;
  int Y;
  cin >> N >> Y;

  int res10000 = -1, res5000 = -1, res1000 = -1;
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N - i; j++){
      int tmp = 10000 * i + 5000 * j + 1000 * (N - i - j);
      if(tmp == Y){
        res10000 = i;
        res5000 = j;
        res1000 = N- i- j;
      }
    }
  }


    cout << res10000 << res5000 << res1000 << endl;

}
