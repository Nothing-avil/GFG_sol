vector<int> longestSubarray(vector<int>& arr, int x) {
        // code here
        int max_len=INT_MIN;
        pair<int,int>p={0,arr.size()};
        priority_queue<pair<int,int>>maxi;
        priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>>mini;
        int i=0,j=0,n=arr.size();
        arr.push_back(INT_MAX);
        while(i<n and j<=n)
        {
            maxi.push({arr[j],j});
            mini.push({arr[j],j});
            while(maxi.top().second<i)
            {
                maxi.pop();
            }
            while(mini.top().second<i)
            {
                mini.pop();
            }
            if(abs(maxi.top().first-mini.top().first)>x)
            {
                if(j-i+1 > max_len)
                {
                   p={i,j};
                   max_len=j-i+1;
                }
                i++;
            }
            j++;
        }
        vector<int>ans(arr.begin()+p.first, arr.begin()+p.second);
        return ans;
}
