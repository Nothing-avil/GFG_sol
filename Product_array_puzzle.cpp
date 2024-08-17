class Solution {
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums) {
        long long int pro = 1;
        int z=0;
        for(int i: nums){
            if(i==0){
                z++;
                continue;
            }
            pro*=i;
        }
        int n=nums.size();
        vector<long long int> res(n);
        for(int i=0; i<n; i++){
            if(z>1){
                res[i]=0;
                continue;
            }
            if(z==1){
                if(nums[i]==0){
                    res[i]=pro;
                }
                else{
                    res[i]=0;
                }
            }
            else{
                res[i] = pro/nums[i];
            }
        }
        return res;
    }
};
