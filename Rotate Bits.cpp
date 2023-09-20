class Solution
{
  public:
        vector <int> rotate (int n, int d)
        {
            vector<int>ans(2,0);
            d%=16;
            ans[0]=((n<<d)| (n>>(16-d))) & 0xFFFF;
            ans[1]=((n>>d)| (n<<(16-d))) & 0xFFFF;
            return ans;
        }
};
