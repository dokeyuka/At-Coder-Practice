#include <iostream>


using namespace std;

int main () {
  int H, W;
  cin >> H >> W;
  string S[101];
  for (int y = 0; y < H; y++){
    cin >> S[y];
  }


/* general solution dx = [-1,0,1], dy = [-1,0,1] */

  for (int y = 0; y < H; y++){
    for (int x = 0; x < W; x++){
      if(S[y][x] == '.'){
        int c = 0;
        for (int dx = -1; dx < 2; dx++){
          for (int dy = -1; dy < 2; dy++){
            if(dx == 0 and dy == 0)
              continue;
            int xx = x + dx;
            int yy = y + dy;
            if(0 <= xx and xx < W and 0 <= yy and yy < H){
              if(S[yy][xx] == '#'){
                c++;

               /* if(y == 0 and x == 0){
                  cout << c << xx << yy << S[yy][xx]<<endl;
                }*/
              }
            }
          }
        }
        S[y][x] = char('0' + c);
      }
    }
  }
  for (int y = 0; y < H; y++)
    cout << S[y] << endl;
}
