#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
using namespace std;

void solve(){
  int n; cin >> n;
  string snd, fst;
  cin >> snd >> fst;
  pair <int, int> curr = {1,1};
  char v;
  for (int i = 0; i < n; i++) {
    if (fst[i] == '>') {
      curr.second++;
    }
    else{
      for (int j = i - 1; j < n; j++){
        curr.first++;
      }
    }
  }
}

signed main() {
  multiset<int> mymultiset;
  

  // insert some values:
  mymultiset.insert (40);
  mymultiset.insert (40);                            // 40
  for (int i=1; i<7; i++) mymultiset.insert(i*10);   // 10 20 30 40 40 50 60

  auto it = mymultiset.find(40);
  mymultiset.erase(it);         // 10 30

  cout << "mymultiset contains:";
  for (it=mymultiset.begin(); it!=mymultiset.end(); ++it)
    cout << ' ' << *it;
  cout << '\n';

  return 0;
}
