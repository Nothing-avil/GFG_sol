class Solution {
  public:
    vector<long long> jugglerSequence(long long n) {
        vector<long long >res;
        res.push_back(n);
        while(n!=1){
            if(n%2==0){
                n= sqrt(n);
                res.push_back(n);
            }
            else{
                n= sqrt(pow(n,3));
                res.push_back(n);
            }
        }
        return res;
    }
};
