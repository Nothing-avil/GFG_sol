class Solution{
public:
    vector<int> recamanSequence(int n){
        vector<int> res;
        map<int, int> mp;
        mp[0]++;
        res.push_back(0);
        for(int i=1; i<n; i++){
            if(((res[i-1]-i)<0) || mp.find(res[i-1]-i)!= mp.end()){
                mp[res[i-1]+i]++;
                res.push_back(res[i-1]+i);
            }
            else{
                res.push_back(res[i-1]-i);
                mp[res[i-1]-i]++;
            }
        }
        return res;
    }
    
};
