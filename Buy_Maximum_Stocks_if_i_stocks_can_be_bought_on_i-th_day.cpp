class Solution {
public:
    int buyMaximumProducts(int n, int k, int arr[]){
        //Write your code here
           pair<int,int> b[n];
        for(int i=0;i<n;i++)b[i].first=arr[i],b[i].second=i+1;
        
        sort(b,b+n);
        
        int ans=0;
        for(int i=0;i<n;i++){
            int f = min(k/b[i].first,b[i].second);
            ans+=f;
            k-=(f*b[i].first);
            
            if(k<=0)break;
        }
        
        return ans;
    }
};
