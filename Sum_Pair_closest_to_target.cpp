// User function template for C++
class Solution {
  public:
    vector<int> sumClosest(vector<int>& arr, int target) {
        sort(begin(arr),end(arr));
        vector<int> ans(2,-1);
        vector<int> ans1;
        int close=INT_MAX,diff=INT_MAX;
        int n=arr.size();
        int i=0,j=n-1;
        while(i<j){
            if(close>abs((arr[i]+arr[j])-target)){
                close=abs(target-(arr[i]+arr[j]));
                if(diff>abs(arr[i]-arr[j]))diff=abs(arr[i]-arr[j]);
                ans[0]=arr[i],ans[1]=arr[j];
            }
            if(arr[i]+arr[j]==target){
                i++,j--;
            }
            else if(arr[i]+arr[j]>target)j--;
            else i++;
        }
        return (ans[0]==-1 and ans[1]==-1)? ans1:ans;
    }
};
