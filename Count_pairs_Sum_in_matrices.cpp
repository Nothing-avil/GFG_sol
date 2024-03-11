class Solution{
public:	
	
	int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
	{
	    int i=0;
	    int j=n*n-1;
	    int ans=0;
	    while(i<(n*n) && j>=0){
	        int e= mat1[i/n][i%n]+ mat2[j/n][j%n];
	        if(e==x){
	            ans++;
	            i++;
	            j--;
	        }
	        else if(e>x){
	            j--;
	        }
	        else{
	            i++;
	        }
	    }
	    return ans;
	}
};
