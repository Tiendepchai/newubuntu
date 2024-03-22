#include <iostream>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

// Header files, namespaces, 
// macros as defined above 
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 

// define tree type
typedef tree<int, null_type,  less_equal<int>, ov_tree_tag, tree_order_statistics_node_update> ordered_set;

signed main() {
  fast
  string typ;
  ordered_set s;
  int Q; cin >> Q;
  while (Q--){
    cin >> typ;
    if (typ == "IN"){
      int x; cin >> x;
      s.insert(x);
    }
    else if (typ == "OUT"){
      int x; cin >> x;
      s.erase(s.find_by_order(s.order_of_key(x)));
    }
    else {
      int res = 0, sz = s.size();
      if(sz&1){
        res = *s.find_by_order(sz/2)*2;
      }
      else{
        res = *s.find_by_order(sz/2) + *s.find_by_order((sz/2)-1);
      }
      // for (auto i:s) cout << i << ' ';
      // cout << '\n';
      cout << (res&1? res/2.0 : res/2) << '\n';
    }
  }
}
