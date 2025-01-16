class Solution {
  public:
    int maxLen(vector<int> &arr) {
        unordered_map<int, int> mp;
        int ans = 0, sum=0;
        mp[0] = -1;
        for(int i=0; i<arr.size(); i++){
            if(arr[i] == 0){
                sum++;
            }
            else{
                sum--;
            }
            if(mp.find(sum) != mp.end()){
                ans = max(ans, i-mp[sum]);
            }
            if(mp.find(sum) == mp.end()){
                mp[sum] = i;
            }
        }
        return ans;
    }
};
