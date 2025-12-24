class Solution {
    public:
    int countLessEqual(vector<int>& arr, int x) {
        int count = 0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=x){
                count++;
            }
        }
        return count;
    }
};
