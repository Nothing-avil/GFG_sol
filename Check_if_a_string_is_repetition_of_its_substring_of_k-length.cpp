class Solution{
public:
	
	int kSubstrConcat (int n, string s, int k)
	{
	    unordered_map<string, int> mp;
        if(n%k!=0)
        {
            return 0;
        }
        for(int i=0;i<s.length();i+=k){
            mp[s.substr(i,k)]++;
        }
        int c=0;
        for(auto x:mp)
        {
            if(x.second==1)
            {
                c++;
            }
        }
        if(mp.size()==1)
        {
            return 1;
        }
        return c&&mp.size()==2?1:0;
	}
};
