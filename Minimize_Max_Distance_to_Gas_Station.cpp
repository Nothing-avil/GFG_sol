class Solution {
  public:
    int noOfGasStationRequired(vector<int> arr, int n, double dist) {
    	int cntStations = 0;
    
        for(int i = 1;i < n; i++) {
            int noInBetween = (arr[i]-arr[i-1])/dist;
            cntStations += noInBetween;
        }
    
        return cntStations;
    }

    double findSmallestMaxDist(vector<int> &stations, int k) {
        int n = stations.size();
        double low = 0, high = 0;

    	for(int i = 0;i < n-1; i++)
    		high = max(high, (double)(stations[i+1]-stations[i]));
    
    	while(high-low > 1e-6) {
    		double mid = (low+high)/2;

    		if(noOfGasStationRequired(stations, n, mid) > k)
    			low = mid;
    		else
    			high = mid;
    	}
    
    	return high;
    }
};
