class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n){
        vector<string> res;
        string re;
        int mat=0;
        unordered_map<string, int>mp;
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        for(auto x: mp){
            if(x.second > mat || (x.second == mat && x.first<re)){
                mat= x.second;
                re = x.first;
            }
        }
        res.push_back(re);
        res.push_back(to_string(mat));
        return res;
    }
};
