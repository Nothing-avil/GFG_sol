class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
         int n=str1.size();
        
        bool flag1=true,flag2=true;
        for(int i=0;i<n;i++){
            if(str2[i]!=str1[(i+2)%n]){
                flag1=false;
            }
            if(str2[i]!=str1[(i-2+n)%n]){
                flag2=false;
            }
        }
        
        return flag1|flag2;
    }

};
