#include <bits/stdc++.h>
using namespace std;
 
void fill_map(vector<vector<char>> &map, vector<vector<bool>> &checked, int x, int y) {
  if (y < 0 || x < 0 || x >= map.size() || y >= map.at(0).size()) return;
  if (map.at(x).at(y) == '#') return;
  if (checked.at(x).at(y) == true) return;
 
  checked.at(x).at(y) = true;
  fill_map(map, checked, x    , y - 1);  // 上に探索を続ける
  fill_map(map, checked, x + 1, y    );  // 右に探索を続ける
  fill_map(map, checked, x    , y + 1);  // 下に探索を続ける
  fill_map(map, checked, x - 1, y    );  // 左に探索を続ける
}

bool check_map(vector<vector<char>> &map) {
  vector<vector<bool>> checked(map.size(), vector<bool>(map.at(0).size(), false));

  // スタート地点を探す
  int x, y;
  for (int i = 0; i < map.size(); i++) {
    for (int j = 0; j < map.at(0).size(); j++) {
      if (map.at(i).at(j) == 's') {
        x = i;
        y = j;
        break;
      }
    }
  }
 
  // スタート地点から上下左右に限界まで探して可能な限り通過したmapにtrueをつける
  fill_map(map, checked, x, y);

  // ゴールの座標にtrueが付いているかをcheckする
  bool ok = true;
  for (int i = 0; i < map.size(); i++) {
    for (int j = 0; j < map.at(0).size(); j++) {
      if (map.at(i).at(j) == 'g') {
        if (!checked.at(i).at(j)) {
          ok = false;
        }
      }
    }
  }
 
  return ok;
}

int main() {
    int H, W;
    cin >> H >> W;

    // map作成
    vector<vector<char>> map(H, vector<char>(W));
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W ; j++){
            cin >> map.at(i).at(j);
        }
    }
    
    if(check_map(map) == true){
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;
}