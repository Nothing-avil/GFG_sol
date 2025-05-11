// User function Template for C++
class Solution {
  public:
    int longestSubarray(vector<int> &arr, int k) {
        int answer = 0, temp = 0;
        unordered_map<int, int> mp;
        for(int i=0; i<arr.size(); i++){
            if(arr[i] <= k){
                temp--;
            }
            else{
                temp++;   
            }
            if(temp <= 0 && !mp.count(temp)){
                mp[temp] = i;
            }
            if(temp <= 0 && mp.count(temp - 1)){
                answer = max(answer, i - mp[temp - 1]);
            }
            if(temp > 0){
                answer = i+1;
            }
        }
        return answer;
    }
};
