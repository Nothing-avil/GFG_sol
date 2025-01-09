class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int s) {
        int i, it;
        long long int sum=0;
        int n = arr.size();
        vector<int> a;
        for(it=0; it<n; it++)
        {
            sum=0;
            for(i=it; i<n; i++)
            {
                sum=sum+arr[i];
                if(sum==s)
                {
                    break;
                }
            }
            if(sum==s)
                {
                    a.push_back(it+1);
                    a.push_back(i+1);
                    break;
                }
        }
        auto l=a.size();
        if(l){
            return a;
        }
        else{
            return {-1};
        }
    }
};
