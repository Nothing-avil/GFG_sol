class Solution {
public:
    int findPeakElement(vector<int>& a) 
    {
        int l=0, h=a.size()-1;
        while(l<=h){
            int mid= (l+h)>>1;
            if(a[mid-1]<a[mid] && a[mid]>a[mid+1]){
                return a[mid];
            }
            else if(a[mid]>a[h]){
                h=mid-1;
            }else{
                l=mid+1;
            }
        }
        return a[a.size()-1];
    }
};
