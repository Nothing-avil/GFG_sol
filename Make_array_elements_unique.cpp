// User function Template for C++

class Solution {
  public:
    int minIncrements(vector<int>& arr) {
        map<int, int> mp;
        for(int i:arr){
            mp[i]++;
        }
        int ans =0 ;
        for(auto i : mp){
            if(i.second >1){
                int x = i.second-1;
                ans+=x;
                i.second = 1;
                mp[i.first+1] += x;
            }
        }
        return ans;
    }
};
