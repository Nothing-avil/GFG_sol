class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    
	    int j=0;
	    for(int i=0; i<n; i++){
	         if(arr[i]){
	            swap(arr[i],arr[j++]);
	        }
	    }
	}
};
