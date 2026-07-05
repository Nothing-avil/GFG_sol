class Solution {
  public:
    int maxCharGap(string &s) {
        unordered_map<char,int>mp;
        int ans=0;
        bool flag=false;
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i])!=mp.end()) ans=max(ans,i-mp[s[i]]),flag=true;
            else mp[s[i]]=i;
        }
        if(flag) return ans-1;
        return -1;
    }
};
