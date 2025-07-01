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
    vi inp;
    while (t--){
        int h;
        cin >> h;
        inp.push_back(h);
    }

    int smallestNum = 101, largestNum = -1;
    int posSmallest = 0, posLargest = 0;

    for(int i = 0; i < inp.size(); i++){
        if(inp[i] > largestNum){
            largestNum = inp[i];
            posLargest = i;
        }
    }
    for(int i = inp.size() - 1; i >= 0; i--){
        if(inp[i] < smallestNum){
            smallestNum = inp[i];
            posSmallest = i;
        }
    }

    int steps = posLargest + ((inp.size() - 1) - posSmallest);
    if (posLargest > posSmallest) steps--;

    cout << steps << endl;
    return 0;
}
