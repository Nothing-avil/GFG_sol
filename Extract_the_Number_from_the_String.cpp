class Solution {
  public:
    long long ExtractNumber(string s) {
        long long num=0,ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='0')
            {
                if(s[i]<'9')    num=num*10+(s[i]-'0');
                else if(s[i]=='9')
                {
                    while(s[i]!=' ' && i<s.size()) i++;
                    num=0;
                }
            }
            if(s[i]==' ' || i==s.size()-1)
            {
                if(num) ans=max(ans,num);
                num=0;
            }
        }
        return ans?ans:-1;
    }
};
