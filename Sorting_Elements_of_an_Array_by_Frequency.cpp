class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(vector<int>& arr) {
        unordered_map<int, int> mp;
        for(int i: arr){
            mp[i]++;
        }
        sort(arr.begin(), arr.end(), [&](auto a, auto b){
            if(mp[a]==mp[b]){
                return a<b;
            }
            return mp[a]>mp[b];
        });
        return arr;
    }
};
