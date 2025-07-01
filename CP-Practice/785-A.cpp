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
    int count=0;
    while (t--){
      string inp;
      cin >> inp;
      if(inp == "Tetrahedron"){
        count+=4;
      } else if (inp == "Cube"){
        count+=6;
      } else if (inp == "Octahedron"){
        count+=8;
      } else if (inp == "Dodecahedron"){
        count+=12;
      } else if (inp == "Icosahedron"){
        count+=20;
      }
    }

    cout << count << endl;
    return 0;
}