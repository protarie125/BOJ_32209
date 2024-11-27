#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll Q;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> Q;
  ll la = 0;
  for (auto q = 0; q < Q; ++q) {
    ll a, b;
    cin >> a >> b;

    if (a == 1) {
      la += b;
    } else {
      if (la < b) {
        cout << "Adios";
        return 0;
      } else {
        la -= b;
      }
    }
  }

  cout << "See you next month";

  return 0;
}