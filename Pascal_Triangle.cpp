class Solution{
public:
int mod=1e9+7;
    vector<long long> nthRowOfPascalTriangle(int n) {
        vector<long long> res(n);
        for(int i=0; i<n; i++){
             
            vector<long long>cont(i+1, 1);

            for(int j=1; j<i; j++){
                cont[j]= (res[j]+res[j-1])%mod;
            }
            res=cont;
        }
        return res;
    }
};
