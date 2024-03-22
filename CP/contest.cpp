#include <bits/stdc++.h> 
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
using namespace std;  

int q, x;
set <int> mex;
vector <int> m;
map<int, int> mp;
void solve(){
  cin >> q, x;
  m = vector<int>(q);
  for (int i = 0; i < q; i++){
    cin >> m[i];
    for (int j = 0; j < i; j++) {
        mp[m[i]]++;
    }
    int mexj = 0;
    for (int t = 0; t <= i; t++) {
      if (mp[t] == 0) {
        mexj = t;
        break;
      }
    }
    cout << mexj << '\n';
  }
  // for (int i:mex) cout << i << ' ';
}

signed main() {
	fast
  int t; 
  // for (cin >> t; t--;)
    solve();
}