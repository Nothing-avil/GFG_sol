class Solution {
  public:
    int totalElements(vector<int> &arr) {
        unordered_map<int, int> mp;
        int n = arr.size();
        int answer = 0;
        int i=0, j=0;
        for(j=0; j<n; j++){
            mp[arr[j]]++;
            while(mp.size() > 2){
                mp[arr[i]]--;
                if(mp[arr[i]] == 0){
                    mp.erase(arr[i]);
                }
                i++;
            }
            answer = max(answer, j-i+1);
        }
        return answer;
    }
};
