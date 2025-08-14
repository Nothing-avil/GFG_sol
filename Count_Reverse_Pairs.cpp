#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
class Solution {
  public:
    int countRevPairs(vector<int> &arr) {
        ordered_set<vector<int>> ost;
        int pairs = 0;
        
        for(int i = 0; i<arr.size(); i++)
        {
            if(!ost.empty())
            {
                int ind = ost.order_of_key({(2*arr[i])+1, 0});
                int element = ost.size()-ind;
                pairs += element;
            }
            ost.insert({arr[i], i});
        }
        return pairs;
    }
};
