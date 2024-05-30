#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool max_filter(vector<vector<int>> &v, int n) {
  if (n % 2 == 0 || int(v.size()) < n || int(v[0].size()) < n) {
    return false;
  }

  vector<vector<int>> copy = v;

  int offset = n / 2;
  for (size_t i = 0; i < v.size(); i++) {
    for (size_t j = 0; j < v[i].size(); j++) {
      vector<int> neighbours;

      for (int x = max(0, int(i - offset)); x <= min((int)v.size() - 1, int(i + offset)); x++) {
        for (int y = max(0, int(j - offset)); y <= min((int)v[0].size() - 1, int(j + offset)); y++) {
          neighbours.push_back(copy[x][y]);
        }
      }

      v[i][j] = *max_element(neighbours.begin(), neighbours.end());
    }
  }

  return true;
}

void show_vector(const vector<vector<int>>& v) {
  cout << "{";
  for (const auto& line : v) {
    cout << "{ ";
    for (const auto& elem : line)
      cout << elem << ' ';
    cout << "}";
  }
  cout << "}";
}

int main() {
  return 0;
}