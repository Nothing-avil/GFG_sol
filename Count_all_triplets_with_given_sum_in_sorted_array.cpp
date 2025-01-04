class Solution {
  public:
    int countTriplets(vector<int> &arr, int target) {
        int n = arr.size();
        int ans =0;
        for(int i=0; i<n-2; i++){
            int p1 = i+1;
            int p2 = n-1;
            while(p1 < p2){
                int sum = arr[i] + arr[p1] + arr[p2];
                if(sum == target){
                    ans++;
                    int t1 = p1+1;
                    int t2 = p2-1;
                    while(t1 <  p2 && arr[t1] == arr[p1]){
                        ans++;
                        t1++;
                    }
                    while(t2 > p1 && arr[t2] == arr[p2]){
                        ans++;
                        t2--;
                    }
                    p1++;
                    p2--;
                }
                else if(sum < target){
                    p1++;
                }
                else{
                    p2--;
                }
            }
        }
        return ans;
    }
};
