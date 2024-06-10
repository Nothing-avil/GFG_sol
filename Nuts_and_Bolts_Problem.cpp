class Solution {
  public:

    void matchPairs(int n, char nuts[], char bolts[]) {
        //first approch 
        
        map<char, int>mp;
        mp.insert({'!', 0});
        mp.insert({'#', 0});
        mp.insert({'$', 0});
        mp.insert({'%', 0});
        mp.insert({'&', 0});
        mp.insert({'*', 0});
        mp.insert({'?', 0});
        mp.insert({'@', 0});
        mp.insert({'^', 0});
        
        for(int i=0; i<n; i++){
            mp[nuts[i]]++;
        }
        int i=0;
        for(auto j: mp){
            if(j.second>0){
                int t=j.second;
                while(t--){
                    nuts[i]= j.first;
                    bolts[i]= j.first;
                    i++;
                }
            }
        }
        
        //second approch
        
        sort(nuts, nuts+n);
        sort(bolts, bolts+n);
        
    }
};
