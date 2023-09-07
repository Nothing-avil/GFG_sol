class Solution {
  public:
    int minimumMultiplications(vector<int>& arr, int start, int end) {
        int mod=100000;
        if(start== end){
            return 0;
        }
        queue<int> q;
        q.push(start);
        vector<bool>visited(1e5 + 1,false);
        visited[start]=true;
        int step=0;
        
        while(!q.empty())
        {
            int size=q.size();
            while(size--)
            {
                int x=q.front();
                q.pop();
                if(x==end)return step;
                for(int i=0;i<arr.size();i++)
                {
                    int y=(x*arr[i])%mod;
                    if(visited[y]==false)
                    {
                       visited[y]=true;
                        q.push(y);
                    }
                }
            }
            step++ ;
        }
        return -1;
    }
};
