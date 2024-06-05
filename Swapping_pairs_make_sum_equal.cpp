class Solution {

  public:
    int findSwapValues(int a[], int n, int b[], int m) {
        int s1=accumulate(a,a+n,0);
        int s2=accumulate(b,b+m,0);
        
        if(abs(s1-s2)%2!=0)
        return -1;
        
        
        sort(a,a+n);
        sort(b,b+m);
        int i=0,j=0;
        while(i<n && j<m)
        {
        if( (a[i]-b[j]) == (s1-s2)/2 )
            return 1;
        
        if((a[i]-b[j]) < (s1-s2)/2)
        {
            i++;
        }
        else
            j++;
        }
        return -1;
    }
};
