class Solution {
  public:
    void substrings(string &s,vector<string>&ans,int index)
    {
        int n=s.size();
        if(index>=n)//base condn
        {
            ans.push_back(s);
            return;
        }
        unordered_set<char> used;
        for(int i=index;i<n;i++)
        {
            if(used.find(s[i])!=used.end())
                continue;
            used.insert(s[i]);
            swap(s[i],s[index]);
            substrings(s,ans,index+1);
            swap(s[i],s[index]);
        }
    }
    vector<string> findPermutation(string &s) {
        vector<string>ans;
        int index=0;
        substrings(s,ans,0);
        return ans;
    }
};
