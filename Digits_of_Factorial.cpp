#include <bits/stdc++.h>
using namespace std;

#define int ll
using ll = long long;
using u32 = unsigned int;
using u64 = unsigned long long;
const int MOD = 1e9 + 7;

#define F first
#define S second
#define R return
#define C continue
#define pb push_back
#define pf push_front
#define mp make_pair

#define pri pair<int, int>
#define vci vector<int>
#define vcc vector<char>
#define vcs vector<string>
#define sti set<int>
#define stc set<char>
#define sts set<string>
#define mpi map<int, int>

#define nl endl
#define FOR(i, a) for (int i = 0; i < int(a); ++i)
#define FORi(i, a) for (int i = 0; i <= int(a); ++i)
#define FOR3(i, a, b) for (int i = a; i < int(b); ++i)
#define FORi3(i, a, b) for (int i = a; i <= int(b); ++i)
#define FOR_R(i, a) for (int i = (a)-1; i >= int(0); --i)
#define yes cout << "YES" << nl
#define no cout << "NO" << nl

#define all(x) x.begin(), x.end()
#define len(x) int(x.size())

#define MIN(v) *min_element(all(v))
#define MAX(v) *max_element(all(v))
#define LB(c, x) distance((c).begin(), lower_bound(all(c), (x)))
#define UB(c, x) distance((c).begin(), upper_bound(all(c), (x)))
#define UNIQUE(x) sort(all(x)), x.erase(unique(all(x)), x.end())
#define SUM(v) accumulate(all(v), 0)

#define db(x) cout << "  [ " #x << " = " << x << " ]" << endl
#define FAST                                                                   \
  ios_base ::sync_with_stdio(false);                                           \
  cin.tie(0);                                                                  \
  cout.tie(0)
#define CIN(v)                                                                 \
  for (auto &it : v)                                                           \
    cin >> it;
#define COUT(v)                                                                \
  for (auto it = v.begin(); it != v.end(); it++) {                             \
    if (it == --v.end())                                                       \
      cout << *it << nl;                                                       \
    else                                                                       \
      cout << *it << " ";                                                      \
  }

vector<double> v(1000001);

void solve(int _) {
  int n, b;
  double d = 0;
  cin >> n >> b;
  cout << "Case " << _ << ": " << int(v[n] / log10(b)) + 1 << endl;
}

int32_t main() {
  // cout << setprecision(2) << fixed;
  FAST;
  v[0] = 0;
  for (int i = 1; i <= 1000001; i++)
    v[i] = v[i - 1] + log10(i);

  int _;
  cin >> _;
  FORi3(i, 1, _) solve(i);
  return 0;
}