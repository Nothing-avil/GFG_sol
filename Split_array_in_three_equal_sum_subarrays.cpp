// User function Template for C++
//  Class Solution to contain the method for solving the problem.
class Solution {
  public:
    // Function to determine if array arr can be split into three equal sum sets.
    vector<int> findSplit(vector<int>& arr) {
        int sum = 0;
        for(int i: arr){
            sum += i;
        }
        int remain = sum/3;
        if(sum % 3 != 0){
            return {-1, -1};
        }
        sum =0;
        vector<int> res;
        for(int i=0; i<arr.size(); i++){
            sum += arr[i];
            if(sum == remain){
                res.push_back(i);
                if(res.size() == 2){
                    break;
                }
                sum = 0;
            }
        }
        if(res.size() == 2){
            return res;
        }
        return {-1, -1};
    }
};
