class Solution {
  public:
    string largestSwap(string &s) {
        int n=s.length();
        vector<int> isNumThere(10,-1);
        for(int i=0;i<n;i++)
        {
            isNumThere[s[i]-'0']=i;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=9;j>=s[i]-'0'+1;j--)
            {
                if(isNumThere[j]!=-1)
                {
                    swap(s[i],s[isNumThere[j]]);
                    return s;
                }
            }
            if(i==isNumThere[s[i]-'0'])
            isNumThere[s[i]-'0']=-1;
        }
        return s;
    }
};
