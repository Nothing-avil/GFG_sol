class Solution {
  public:
    int maxDistance(vector<int> &arr) {
        unordered_map<int,int> mp;
        int n = arr.size();
        int miniDist = 0;
        
        for(int i =0; i<n; i++){
            if(mp.find(arr[i]) != mp.end()){
                int ind = mp[arr[i]];
                int mini = i - ind;
                miniDist = max(miniDist,mini);
            }
            else{
                mp[arr[i]] = i;
            }
        }
        
        return miniDist;
    }
};
