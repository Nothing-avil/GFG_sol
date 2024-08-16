class Solution
{
    public:
    //Function to find the maximum number of cuts.
    int maximizeTheCuts(int n, int x, int y, int z)
    {   
        vector<int> dp(n+1, -1);
        function<int(int ,int, int, int)> solver = [&](int n, int x, int y, int z){
            if(n==0){
                return 0;
            }
            if(dp[n]!=-1){
                return dp[n];
            }
            int a=INT_MIN, b=INT_MIN, c=INT_MIN;
            if(n>=x)
             a= solver(n-x, x, y, z);
            
            if(n>=y)
             b= solver(n-y, x, y, z);
            
            if(n>=z)
             c= solver(n-z, x, y, z);
            
            dp[n]= 1+max(a, max(b,c));
            
            return dp[n];
        };
        int ans= solver(n, x, y, z);
        if(ans<0){
            return 0;
        }
        return ans;
        
    }
};
