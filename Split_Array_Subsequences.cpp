class Solution {
  public:
    bool isPossible(vector<int>& arr, int k) {
        if(arr.size() < 2){
            return 1;
        }
        map<int,int>mp;
        for(auto&it:arr){
            mp[it]++;
        }
        int a = -1;
        int b = -1;
        int len = 1;
        for(auto&[f,s]:mp){
            if((a != -1) && (f - a == 1) && (s == b)){
                len++;
            }else{
                len = 1;
            }
            
            a = f;
            b = s;
            
            if(len >= k){
                return 1;
            }
        }
        return 0;
    }
};
