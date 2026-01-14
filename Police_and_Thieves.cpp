class Solution {
  public:
    int catchThieves(vector<char> &arr, int k) {
        int ans = 0;
        int p = 0, t = 0, n = arr.size();
        
        while(p < n && t < n){
            while(p < n && arr[p] != 'P') p++; //find the next police
            while(t < n && arr[t] != 'T') t++; //find the next thief
            if(p < n && t < n){
                if(abs(t - p) <= k){ //if thief is within reach increment result
                    ans++;
                    t++;
                    p++;
                }else{
                    if(p > t) t++; // if thief is behind the police by more than k, find the next thief that is within reach
                    else p++; //but if the police is far behind, find the the nex tpolice that is closer to the theif
                }
            } 
        }
        return ans;
    }
};
