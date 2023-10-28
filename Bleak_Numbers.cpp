class Solution
{
public:
	int is_bleak(int n)
	{
	    
	    for(int x=0; x<=log2(n)+1; x++){
	        if( __builtin_popcountll(n - x)==x){
	            return 0;
	        }
	    }
	    return 1;
	}
};
