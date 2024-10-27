class Solution {
  public:
    bool findTriplet(vector<int>& arr) {
        unordered_map<int, int> mp;
        for(int i : arr){
            mp[i]++;
        }
        for(int i=0; i<arr.size()-1; i++){
            for(int j=i+1; j<arr.size(); j++){
                int a = arr[i];
                int b = arr[j];
                if(mp.count((a+b))){
                    return true;
                }
            }
        }
        return false;
    }
};
