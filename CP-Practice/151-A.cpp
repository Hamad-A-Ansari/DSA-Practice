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
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int toast=0;
    
    int totML = k*l;
    int perFriendMl= totML/nl;

    int totLime = c*d;

    toast = min(min(perFriendMl, totLime), p/np) / n;

    cout<<toast<<"\n";
    return 0;
}