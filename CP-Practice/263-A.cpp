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

int solve(int i, int j){
  int count =0;
  
  if(i < 2){
    while(i!= 2){
      i++;
      count++;
    }
  }

  if(i > 2){
    while(i!=2){
      i--;
      count++;
    }
  }

  if(j < 2){
    while(j!=2){
      j++;
      count++;
    }
  }

  if(j > 2){
    while(j!=2){
      j--;
      count++;
    }
  }

  return count;
}

int32_t main() {
    fastIO();
    vector<vi> matrix(5, vi(5));
    int posI, posJ;
    for(int i =0; i < 5; i++){
      for(int j =0; j < 5; j++){
        cin >> matrix[i][j];
        if (matrix[i][j] == 1){
          posI = i;
          posJ = j;
        }
      }
    }

    if(posI == 2 && posJ==2) cout << "0" << endl;
    else{
      int count = solve(posI, posJ);
      cout << count << endl;
    }


    return 0;
}