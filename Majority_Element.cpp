class Solution{
  public:
    int majorityElement(int a[], int size)
    {
        if(size==1){
            return a[0];
        }
        int count=0;
        sort(a,a+size);
        int mid = a[(size/2)-1];
        for(int i=0; i<size ; i++){
            if(a[i]==mid){
                count++;
            }
        }
        if(count>=((size/2)+1)){
            return mid;
        }
        else{
            return -1;
        }
    }
};
