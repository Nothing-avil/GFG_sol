#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;

typedef tree<long long, null_type, greater_equal<long long>, rb_tree_tag, tree_order_statistics_node_update> pbds; 

class Solution{
    public:
    int countPairs(int arr[] , int n ) 
    {
        for (int i = 0; i < n; i++) {
            arr[i] *= i;
        }

        pbds st;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            
            ans += st.order_of_key(arr[i]);
            
            st.insert(arr[i]);
        }
        return ans;
    }
};
