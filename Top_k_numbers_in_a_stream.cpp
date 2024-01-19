class Solution {
  public:
    vector<vector<int>> kTop(vector<int>& arr, int N, int K) {
        vector<vector<int>> result;
        unordered_map<int, int> mp;
        
        vector<int> top(K+1);
        //5, 2, 1, 3, 2
        for(int i = 0; i < N; i++) {
            int val = arr[i]; //5
            
            mp[val]++; //5 -> 1
            top[K] = val; //{0, 0, 0, 0, 5}
            
            int idx = K;
            
            for(int j = K-1; j >= 0; j--) {
                if(top[j] == val) {
                    idx = j;
                    break;
                }
            }
            
            for(int j = idx-1; j >= 0; j--) {
                if(mp[top[j]] < mp[top[j+1]]) {
                    swap(top[j], top[j+1]);
                } else if(mp[top[j]] == mp[top[j+1]] && (top[j] > top[j+1])) {
                    swap(top[j], top[j+1]);
                } else {
                    break;
                }
            }
            
            vector<int> temp;
            for (int j = 0; j < K && top[j] != 0; ++j) {
                temp.push_back(top[j]);
            }
                
            result.push_back(temp);
        }
        
        return result;
    }
};
