class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        unordered_map<int,int> mp;
        for(int i=0; i<k; i++){
            mp[arr[i]]++;
        }
        vector<int> res;
        int c = mp.size();
        res.push_back(c);
        for(int j=k, i=0; j<arr.size(); j++){
            mp[arr[i]]--;
            if(mp[arr[i]] == 0){
                mp.erase(arr[i]);
            }
            i++;
            mp[arr[j]]++;
            c= mp.size();
            res.push_back(c);
        }
        return res;
    }
};
