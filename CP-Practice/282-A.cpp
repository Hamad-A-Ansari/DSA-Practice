#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
typedef vector<int> vi;
typedef pair<int, int> pii;
const int MOD = 1e9 + 7;
const int INF = 1e18;

void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve(int *x) {
    string n;
    cin >> n;
    if (n.find("++") != std::string::npos) {
        (*x)++;
    } else {
        (*x)--;
    }
}

int32_t main() {
    fastIO();
    int t = 1;
    cin >> t;
    int n = 0;
    while (t--) solve(&n);
    cout << n << "\n"; 
    return 0;
}
