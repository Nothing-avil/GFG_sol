class Solution {

  public:
    //Function to find two repeated elements.
    vector<int> twoRepeated (int arr[], int n) {
        vector<int>mp((n+1),0);
        vector<int>res;
        for(int i=0; i<n+2; i++){
            mp[arr[i]]++;
            if(mp[arr[i]]==2){
                res.push_back(arr[i]);
            }
        }
        return res;
    }
};
