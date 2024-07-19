class Solution {
  public:
  
   int binarySearch(vector<int> &temp, int key){
        int index = 1;
        int low = 0;
        int high = temp.size()-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(temp[mid] == key){
                index = mid;
                high = mid-1;
            }
            else if(temp[mid]>key){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return index;
    }
  
    vector<int> constructLowerArray(vector<int> &arr) {
        vector<int> res(arr.size());
        vector<int> temp;
        for(int i = 0; i<arr.size(); i++){
            temp.push_back(arr[i]);
        }
        sort(temp.begin(), temp.end());
        for(int i=0; i<arr.size(); i++){
            int index = binarySearch(temp, arr[i]);
            res[i] = index;
            vector<int>::iterator it;
 
            it = temp.begin()+index;
            temp.erase(it);
        }
        return res;
    }
};
