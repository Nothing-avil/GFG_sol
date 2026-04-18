class Solution {
  public:
    int maxOnes(vector<int>& arr) {
        int n = arr.size();
        int count=0;
        int max=0;
        int one=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==1)
                one++;
            if(arr[i]==0)
            {
                count++;
                if(max<count)
                    max=count;
                
            }
            else if(count!=0)
                count--;
        }
        return max+one;
    }
};
