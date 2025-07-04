class Solution {
  public:
    int countAtMostK(vector<int> &arr, int k) {
        unordered_map<int, int> mp;
        int n = arr.size();
        int answer = 0;
        int i=0, j=0;
        for(j=0; j<n; j++){
            mp[arr[j]]++;
            while(mp.size() > k){
                mp[arr[i]]--;
                if(mp[arr[i]] == 0){
                    mp.erase(arr[i]);
                }
                i++;
            }
            answer += (j-i+1);
        }
        return answer;
    }
};
