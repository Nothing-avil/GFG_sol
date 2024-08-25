class Solution {
  public:
    long long countPairs(vector<int> &arr, vector<int> &brr) {
        int n=(int)arr.size();
        int m=(int)brr.size();
        long long res=0;
        sort(brr.begin(),brr.end());
        map<int,int>mp;
        for(auto it:brr)
        {
            mp[it]++;
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]==1)
            continue;
            int x=arr[i];
            if(arr[i]==2)
            x+=2;
            int rem=upper_bound(brr.begin(),brr.end(),x)-brr.begin();
            
            rem=m-rem;
            
            rem+=mp[1]*1LL;
            
            if(arr[i]==3)
            rem+=mp[2]*1LL;
            res+=rem*1LL;
        }
        return res;
    }
};
