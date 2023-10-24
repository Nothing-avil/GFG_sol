int dp[505][505];
class Solution{
private:  
    bool isPal(int i , int j , string &str){
        while(i < j){
            if(str[i] != str[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    
    int f(int i, int j , string &str){
        if(j == str.size()){
            if(i < str.size()) return 1e9;
            return 0;
        }
        
        if(dp[i][j] != -1) return dp[i][j];
        
        int part = 1e9,notPart = 1e9;
        if(isPal(i,j,str)){
            part = 1 + f(j+1,j+1,str);
        }
        notPart = f(i,j+1,str);
        
        return dp[i][j] = min(part,notPart);
    }
    
public:
    int palindromicPartition(string str)
    {
        memset(dp,-1,sizeof(dp));
        int ans = f(0,0,str);
        return ans-1;
    }
