// Fisrt approch

class Solution
{
public:    
    
    int transitionPoint(int arr[], int n) {
        for(int i=0; i<n; i++){
            if(arr[i]==1){
                return i;
            }
        }
        return -1;
    }
};


// Second Approch 

class Solution
{
public:    
    
    int transitionPoint(int arr[], int n) {
        int i=0, j=n-1, mid, flag=0;
        while(i<=j){
            mid= i+ (j-i)/2;
            if(arr[mid]==0 && arr[mid+1]==1){
                return mid+1;
            }
            else if(arr[mid]==0){
                i=mid+1;
                flag=0;
            }
            else if(arr[mid]==1){
                j=mid-1;
                flag=1;
            }
        }
        if(flag==1){
            return 0;
        }
        return -1;
    }
};
