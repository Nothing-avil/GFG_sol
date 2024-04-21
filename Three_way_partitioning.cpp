//1st approch>>>>>>>>

class Solution{   
public:
    //Function to partition the array around the range such 
    //that array is divided into three parts.
    void threeWayPartition(vector<int>& array,int a, int b)
    {
        sort(array.begin(), array.end());
    }
};


// 2nd approach>>>>>>>>>>>

class Solution{   
public:
    //Function to partition the array around the range such 
    //that array is divided into three parts.
    void threeWayPartition(vector<int>& array,int a, int b)
    {
        int s=0, e=array.size()-1;
        int m=0;
        while(m<=e){
            if(array[m]<a){
                swap(array[s], array[m]);
                m++;
                s++;
            }
            else if(array[m]>b){
                swap(array[m], array[e]);
                e--;
            }
            else{
                m++;
            }
        }
        
    }
};
