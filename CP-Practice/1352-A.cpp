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


int32_t main() {
    fastIO();
    int t = 1;
    cin >> t;
    while (t--){
      int n;
      cin >> n;
      int count = 0;
      vi res;
      int place =1;
      while(n > 0){
        int dig = n%10;
        if(dig != 0){
          res.push_back(dig*place);
          count++;
        }
        n/=10;
        place*=10;
      }
      reverse(res.begin(), res.end());

      cout << count << endl;
      for(auto it: res) {
        cout << it << " ";
      }
      cout << "\n";
    }
    return 0;
}