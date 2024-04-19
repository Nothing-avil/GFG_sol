class Solution{
	public:
	vector<int> findMissing(int a[], int b[], int n, int m) 
	{ 
	    unordered_map<int, int> mp;
	    for(int i=0; i<m; i++){
	        mp[b[i]]++;
	    }
	    vector<int> res;
	    for(int i=0; i<n; i++){
	        if(mp.find(a[i])==mp.end()){
	            res.push_back(a[i]);
	        }
	    }
	    return res;
	} 
};
