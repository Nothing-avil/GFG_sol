class Solution {
    int find(int a, int par[])
    {
        if(a == par[a])
            return a;
        return par[a] = find(par[a], par);
    }
     
    void unionn(int a,int b,int par[],int sz[], set<string> s[]){
    	a = find(a,par);
    	b = find(b,par);
    	if(a == b)
    		return ;
    	if(sz[a]>sz[b])
    		swap(a,b);
    	par[a] = b;
    	sz[b] += sz[a];
    	s[b].insert(s[a].begin(), s[a].end());
    }
  public:
    vector<vector<string>> accountsMerge(vector<vector<string>> &accounts) {
        unordered_map<string, int> mp;
        int n = accounts.size();
        int par[n], sz[n];
        set<string> s[n];
        for(int i=0;i<n;i++)
            par[i] = i, sz[i] = 1, s[i].insert(accounts[i].begin() + 1, accounts[i].end());
        
        for(int i=0;i<accounts.size();i++)
            for(int j=1;j<accounts[i].size();j++)
            {
                if(mp.find(accounts[i][j]) == mp.end())
                    mp[accounts[i][j]] = i;
                unionn(mp[accounts[i][j]], i, par, sz, s);
                mp[accounts[i][j]] = i;
            }
        
        vector<vector<string>> ans;
        for(int i=0;i<n;i++)
            if(par[i] == i)
            {
                ans.push_back({accounts[i][0]});
                ans.back().insert(ans.back().end(), s[i].begin(), s[i].end());
            }
        return ans;
    }
};
