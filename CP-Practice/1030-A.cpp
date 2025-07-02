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
    int i=0;
    while (t--){
      int ip;
      cin>>ip;
      i = ip;
      if(i==1)break;
    }
    if(i==1) cout << "HARD" << endl;
    else cout <<"EASY" << endl;

    return 0;
}