// such that arr[smaller[i]] < arr[i] < arr[greater[i]]

class Solution {
  public:
    vector<int> find3Numbers(vector<int> &arr) {
        int n = arr.size();
        
        vector<int> prefixMin(n);
        prefixMin[0] = arr[0];
        
        for(int i = 1;i < n; i++)
            prefixMin[i] = min(prefixMin[i-1], arr[i]);
            
        vector<int> suffixMax(n);
        suffixMax[n-1] = arr[n-1];
        
        for(int i = n-2;i >= 0; i--)
            suffixMax[i] = max(suffixMax[i+1], arr[i]);
            
        for(int i = 0;i < n; i++) {
            if((arr[i] > prefixMin[i]) && (arr[i] < suffixMax[i]))
                return {prefixMin[i], arr[i], suffixMax[i]};
        }
        return {};
    }
};
