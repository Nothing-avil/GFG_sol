class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        long long n=arr.size();
        long long linear = n*(n+1)/2;
        long long quadratic = n*(n + 1)*(2*n + 1)/6;
        
        long long linears=0;
        long long quad = 0;
        
        for(long long i : arr){
            linears += i;
            quad += (long long)(i*i);
        }
        long long range = linears - linear;
        long long quad_range = (quad-quadratic)/range;
        long long ans1= (range + quad_range)/2;
        long long ans2 = quad_range - ans1;
        
        return {ans1, ans2};
    }
};
