class Solution
{
    public:
        //User function Template for C++
        
        int maxProfit(vector<int>&price){
            //Write your code here..
            int b1= INT_MAX;
            int s1= INT_MIN;
            int b2= INT_MAX;
            int s2= INT_MIN;
            int n= price.size();
            for(int i=0; i<n; i++){
                b1=min(b1, price[i]);
                s1=max(s1, price[i]-b1);
                b2=min(b2, price[i]-s1);
                s2=max(s2, price[i]-b2);
            }
            return s2;
        }
};
