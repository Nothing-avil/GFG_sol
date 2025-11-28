class Solution {
  public:
    vector<int> subsetXOR(int n) {
        int xr = 0;
        for(int i = 1; i <= n; i++)
        {
          xr ^= i;   
        }
        int req = 0;
        for(int i = 0; i < 30; i++)
        {
            if((xr&(1<<i)) != (n&(1<<i)))
            {
                req |= (1<<i);
            }
        }
        vector<int>ans;
        for(int i = 1; i <= n; i++)
        {
            if(i != req)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
