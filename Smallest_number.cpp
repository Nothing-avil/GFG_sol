// User function Template for C++
class Solution {
  public:
    string smallestNumber(int s, int d) {
        if(s>9*d) return "-1";
        string res(d,' ');
        s--;
        for(int i=d-1;i>=1;i--){
            int diff=min(9,s);
            res[i]='0'+diff;
            s-=diff;
        }
        
        res[0]='1'+s;
        return res;
    }
};
