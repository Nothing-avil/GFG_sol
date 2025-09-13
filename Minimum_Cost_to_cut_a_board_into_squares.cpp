class Solution {
  public:
    int minCost(int n, int m, vector<int>& x, vector<int>& y) {
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());
        int hori = 1;
        int ver = 1;
        int sum = 0;
        
        int n1 = x.size();
        int n2 = y.size();
        
        int i=n1-1;
        int j=n2-1;
        
        while(i>=0 && j>=0){
            if(x[i]>=y[j]){
                sum += x[i]*hori;
                ver++;
                i--;
            } else{
                sum += y[j]*ver;
                hori++;
                j--;
            }
        }
        
        while(i>=0){
            sum += x[i]*hori;
            ver++;
            i--;
        }
        
        while(j>=0){
            sum += y[j]*ver;
            hori++;
            j--;
        }
        
        return sum;
    }
};
