class Solution{
	int dp[101][901];
	public:
	
	int qwerty(string str, int i, int prev){
	    if(i ==str.size()){
	        return 1;
	    }
	    if(dp[i][prev]!=-1){
	        return dp[i][prev];
	    }
	    int ans=0, sum=0;
	    for(int j=i; j<str.size(); j++){
	        sum += str[j]-'0';
	        if(sum>=prev){
	            ans += qwerty(str, j+1, sum);
	        }
	    }
	    return dp[i][prev]= ans;
	}
	int TotalCount(string str){
	    memset(dp, -1, sizeof(dp));
	    int ans=0;
	    int pre=0;
	    for(int i=0; i<str.size(); i++){
	        pre+= str[i]-'0';
	        ans += qwerty(str, i+1, pre);
	    }
	    return ans;
	}

};
