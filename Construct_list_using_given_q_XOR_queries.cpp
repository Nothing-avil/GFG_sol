class Solution {
  public:
    vector<int> constructList(int q, vector<vector<int>> &queries) {
        vector<int> res = {0};
        int val=0;
        for(auto i: queries){
            
            if(i[0]==0){
                res.push_back(i[1]^val);
            }
            else{
                val^= i[1];
            }
        }
        
        for(int i=0; i<res.size(); i++){
            res[i]^= val;
        }
        sort(res.begin(), res.end());
        
        return res;
    }
};
