class Solution {
  public:
    bool f(int h , vector<int> &arr, int k, int w){
        int n = arr.size() ;
        vector<int>temp(n, 0) ;
        int res = 0 , curr = 0 ;
        for(int i = 0 ; i < n ; i ++){
            if(arr[i] < h){
                int req = max(0 , h - arr[i] - curr) ;
                res += req ; 
                curr += req ;
                if(i + w - 1 < n) temp[i + w - 1] = -1*req ;
            }
            curr += temp[i] ; 
        }
        return res <= k ;
    }
    
    int maxMinHeight(vector<int> &arr, int k, int w) {
        int s = *min_element(arr.begin() , arr.end()) ;
        int e = *max_element(arr.begin() , arr.end()) + k ;
        int ans = s ;
        while(s <= e){
            int mid = s + (e-s) / 2 ;
            if(f(mid , arr , k , w)){
                ans = mid ;
                s = mid + 1 ;
            }
            else{
                e = mid - 1 ;
            }
        }
        return ans ;
    }
};
