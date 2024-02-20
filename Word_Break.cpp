class Solution
{
public:
    int wordBreak(int ns, string s, vector<string> &dictionary) {
        int n= s.size();
        vector<bool> dp(n+1, 0);
        dp[0]=1;
        for(int i=0; i<n; i++){
            if(!dp[i]){
                continue;
            }
            string str;
            for(int  j=i; j<n; j++){
                str+=s[j];
                for(auto q: dictionary){
                    if(str==q){
                        dp[j+1]=1;
                        break;
                    }
                }
            }
        }
        return dp[n];
    }
};
