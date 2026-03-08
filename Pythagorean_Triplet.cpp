class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	int findroot(int n){
	    int low = 1;
	    int high = n;
	    
	    while(low < high - 1){
	        int mid = low + (high - low) / 2;
	        
	        if(mid * mid > n)
	            high = mid;
	        else
	            low = mid;
	    }
	    
	    return low;
	}
	bool checkTriplet(int arr[], int n) {
	    int m=  *max_element(arr, arr+n);
	    int res[m+1]= {0};
	    for(int i=0; i<n;i++){
	        ++res[arr[i]];
	    }
	    for(int i=1; i<=m; i++){
	        for(int j=1; j<m; j++){
	            int ans = i*i + j*j;
	            
	        }
	        for(int i = 1; i < m + 1; i++){
	        for(int j = 1; j < m + 1; j++){
	            int sq = i * i + j * j;
	            int k = findroot(sq);
	            
	            if(k > m or k * k != sq)
	                continue;
	            
	            --res[i];
	            --res[j];
	            --res[k];
	            
	            if(res[i] >= 0 and res[j] >= 0 and res[k] >= 0){
	                return 1;
	            }
	            
	            ++res[i];
	            ++res[j];
	            ++res[k];
	        }
	    }
	    }
	}
};
