class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        vector<int> res;
        if(n<2){
            return {-1};
        }
        int j=0;
        int a;
        sort(arr, arr+n);
        for(int i=0; i<n-1; i++){
            if(arr[i]==arr[i+1]){
                if(j==0 || res.back()!=arr[i]){
                    res.push_back(arr[i]);
                    j++;
                }
            }
        }
        if(res.size()==0){
            return {-1};
        }
        return res;
    }
};
