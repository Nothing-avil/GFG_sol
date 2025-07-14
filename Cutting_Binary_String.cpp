class Solution {
  public:
    bool isPowerOfFive(long long N){
        while(N>1){
            if(N%5!=0)
                return 0;
            N/=5;
        }    
        return 1;
    }
    
    int helper(int i,string &s,long long sum){
        
        if(i>=s.size()){
            if(sum==0)
                return 0;
            return INT_MAX; 
        }
        sum = sum*2+(s[i]-'0');
        if(sum==0)
            return INT_MAX; 
        int op1=INT_MAX,op2=INT_MAX;
        if(isPowerOfFive(sum)){
            int temp = helper(i+1,s,0);
            if(temp!=INT_MAX)
                op1 = 1 + temp;
        }
        op2=helper(i+1,s,sum);
        return min(op1,op2);
    }
    
    int cuts(string s){       
        int ans= helper(0,s,0);
        return ans==INT_MAX?-1:ans;
    }
};
