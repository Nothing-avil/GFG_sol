class Solution {
  public:
    int dfs(int i,int j,int left,int right,vector<int>& nums){
        if(i>=j){
            if(nums[i]<right&&nums[i]>left) return 1;
            return 0;
        }
        int mid=i+(j-i)/2;
        int ans=0;
        if(nums[mid]>left&&nums[mid]<right) ans++;
        ans+=dfs(i,mid-1,left,min(right,nums[mid]),nums);
        ans+=dfs(mid+1,j,max(left,nums[mid]),right,nums);
        return ans;
    }
    int binarySearchable(vector<int>& arr) {
        // code here
        return dfs(0,arr.size()-1,INT_MIN,INT_MAX,arr);
    }
};
