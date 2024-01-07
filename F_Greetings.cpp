#include <iostream>  
using namespace std;  
  
// Important header files   
#include <ext/pb_ds/assoc_container.hpp> // Common file  
#include <ext/pb_ds/tree_policy.hpp>  
#include <functional> // for less  
#include <iostream>  
using namespace __gnu_pbds;  
using namespace std;  
  
// Declaring ordered_set 
typedef tree<int, null_type, less<int>, rb_tree_tag,  
            tree_order_statistics_node_update>  
    ordered_set;  


void Sandipan()    {
    
    long long int n, a, b, cnt = 0;
    cin >> n;
    vector<pair<int, int>> v;
    ordered_set st;
    
    for(int i=0; i<n; i++)  {
      cin >> a >> b;
      v.push_back({a, b});
      st.insert(b);
    }
    sort(v.begin(), v.end());
    for(auto it : v)  {
      cnt += st.order_of_key(it.second);
      st.erase(it.second);
    }
    cout << cnt << endl;
    
}



int main()  {
  int testCase;
  cin >> testCase;
  
  while(testCase--)

    Sandipan();
  
  return 0;
}