#include <iostream>
using namespace std;

int main() {
  int N;
  int t[N+10] = {0}, x[N + 10] = {0}, y[N + 10] = {0};
  cin >> N;
  for (int i = 1; i < N; i++){
    cin >> t[i] >> x[i] >> y[i];
  }
  //for check
  //cout << t[0] << x[1];
  bool can = false;
  int u, d, l, r;
  for (int i = 1; i < N; i++){
    int dt = t[i] - t[i - 1];
    int dx = x[i] - x[i - 1];
    int dy = y[i] - y[i - 1];
    int tmp = dt - dx - dy;

    if (tmp % 2 == 0)
    {
      for (d = 0; (-d + tmp) >= 0; d++){
        l = tmp - d;
        r = l + dx;
        u = d + dy;
        if (l >= 0 && r >= 0 && u >= 0){
          cout << "Yes" << endl;
          can = true;
          break;
        }
      }
    }
    if (can)
      break;
  }
}
