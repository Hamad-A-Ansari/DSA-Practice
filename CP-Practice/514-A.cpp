#include <bits/stdc++.h>
#include <string>
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

void solve(std::string &x) {

    for(int i =0; i < x.size(); i++){
      if(i == 0){
        int sum = 9- (x[i] - '0');
        x[i] = (sum == 0) ? x[i] : (sum < (x[i]-'0')) ? sum+'0':x[i]; 
      } else {
        int sum = 9- (x[i] - '0');
        x[i] = (sum < (x[i]-'0')) ? sum+'0':x[i];
      }
    }
}

int32_t main() {
    fastIO();
    std::string n = "";
    cin >> n;
    solve(n);
    cout << n << "\n"; 
    return 0;
}
