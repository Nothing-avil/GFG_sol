class Solution {
  public:
    int sameOccurrence(vector<int>& arr, int x, int y) {
        unordered_map<int, int> mp;
        mp[0] =1;
        int csum=0;
        int ans = 0;
        for(int i: arr){
            if(i==x){
                csum+=1;
            }
            else if(i==y){
                csum-=1;
            }
            if(mp.count(csum)){
                ans+=mp[csum];
            }
            mp[csum]++;
        }
        return ans;
    }
};
