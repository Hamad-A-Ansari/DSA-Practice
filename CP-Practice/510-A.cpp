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
    int n,m;
    cin>>n>>m;
    for(int i =1; i <=n; i++){
      /* code */
      if(i%2 != 0){
        for(int j =0; j < m; j++) cout << "#";
      } else {
        if((i/2) %2 != 0){
          for(int j =0; j < m-1; j++) cout <<".";
          cout << "#";
        } else {
          cout << "#";
          for(int j =0; j < m-1; j++) cout <<".";
        }
      }

      cout << endl;

    }   
    return 0;
}