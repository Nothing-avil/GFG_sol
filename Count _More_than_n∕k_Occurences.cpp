class Solution
{
    public:
    int countOccurence(int arr[], int n, int k) {
        int c=0;
        unordered_map<int, int> mp;
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
         for(auto it:mp)
        {
           if(it.second> n/k)
           {
               c++;
           }
        }
        return c;
    }
};
