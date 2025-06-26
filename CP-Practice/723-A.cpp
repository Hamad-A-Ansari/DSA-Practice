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
    int x1,x2,x3;
    cin>>x1>>x2>>x3;
    vector<int> v={x1,x2,x3};
    sort(v.begin(), v.end());


    cout << v[2] - v[0] << endl;
    return 0;
}