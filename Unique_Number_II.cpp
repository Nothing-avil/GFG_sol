class Solution {
  public:
    vector<int> singleNum(vector<int>& arr) {
        int xors = 0, x = 0, y = 0;
        for(int i : arr){
            xors ^= i;
        }
        int num = xors & (-xors);
        vector<int> ans;
        for(int i : arr){
            if(i & num){
                x ^= i;
            }
            else{
                y ^= i;
            }
        }
        if(x > y){
            ans.push_back(y);
            ans.push_back(x);
        }
        else{
            ans.push_back(x);
            ans.push_back(y);
        }
        return ans;
    }
};
