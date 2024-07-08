class Solution {
  public:
    int search(vector<int>& arr, int key) {
        
        //O(log n)
        int low =0, high = arr.size()-1;
        int mid ;
        while(low<=high){
            mid = (low+high)>>1;
            if(arr[mid] == key) return mid;
            else if(arr[mid]< arr[0]){
                if(key<=arr[high] && key>arr[mid]) low = mid+1;
                else high = mid-1;
            }
            else{
                if(key>= arr[low] && key<arr[mid]) high = mid-1;
                else low = mid+1;
                
            }
        }
        return -1;
        
        //O(n)
        int h= arr.size();
        for(int mid=0; mid<h; mid++){
            if(arr[mid]==key){
                    return mid;
            }
        }
        return -1;
    }
};
