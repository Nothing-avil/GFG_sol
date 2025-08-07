class Solution {
  public:
    int minDifference(vector<string> &arr) {
        int n=arr.size();
        vector<int>t(n);
        for(int i=0;i<n;i++){
            int h,m,s;
            string temp=arr[i];
            h=10*(temp[0]-'0')+(temp[1]-'0');
            m=10*(temp[3]-'0')+(temp[4]-'0');
            s=10*(temp[6]-'0')+(temp[7]-'0');
            
            int total=60*60*h+60*m+s;
            t[i]=total;
        }
        sort(t.begin(),t.end());
        
        int ans=INT_MAX;
        for(int i=1;i<n;i++){
            ans=min(ans,t[i]-t[i-1]);
        }
        ans=min(ans,23*60*60+59*60+60-t[n-1]+t[0]);
        return ans;
    }
};
