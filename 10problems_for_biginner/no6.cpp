#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int N;
  int a[110];//must set larger than 100
  cin >> N;
  for (int i = 0; i < N; i++){
    cin >> a[i];
  }

  int Alice = 0;
  int Bob = 0;
  sort(a, a + N, greater<int>());
 /* for (int i = 0; i < N; i++){
    cout << a[i];
  }*/
    // descending order
    for (int i = 0; i < N; i++)
    {
      if (i % 2 == 0)
      {
        Alice += a[i];
      }
      else
      {
        Bob += a[i];
      }
  }
  int ans = Alice - Bob;
  cout << ans << endl;
}
