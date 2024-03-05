class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int a[], int n) 
    { 
        // Your code here
        vector<int>v;
        v.push_back(n-1);
        for(int i=n-2;i>=0;i--){
            if(a[i]>a[v.back()])v.push_back(i);
        }
        int ans=0;
        for(int i=0;i<n-1;i++){
            while( v.size()>0 && a[i]<=a[v.back()]){
                ans=max(ans,v.back()-i);
                v.pop_back();
            }
        }
        return ans;
    }
};
