class Solution {
  public:
     int first_occ(int x,int y ,vector<int> input){
        int left=0,right=input.size()-1;
        int mid;
        while(left<=right){
            mid=(left+right)/2;
            if(input[mid]>=x && input[mid]<=y){
                right=mid-1;
            }else if(input[mid]>y && input[mid]>x){
                right=mid-1;
            }else{
                left=mid+1;
            }
        }
        return left;
    }
    int sec_occ(int x1,int y1 ,vector<int> input1){
        int left1=0,right1=input1.size()-1;
        int mid1;
        while(left1<=right1){
            mid1=(left1+right1)/2;
            if(input1[mid1]>=x1 && input1[mid1]<=y1){
                left1=mid1+1;
            }else if(input1[mid1]<x1 && input1[mid1]<y1){
                left1=mid1+1;
            }
            else{
                right1=mid1-1;
            }
        }
        return right1;
    }
    
    vector<int> cntInRange(vector<int> &arr, vector<vector<int>> &queries) {
        // code here
        sort(arr.begin(),arr.end());
        int m=queries.size();
        vector<int> output(m,0);
        int first,last;
        for(int i=0;i<m;i++){
            first=first_occ(queries[i][0],queries[i][1],arr);
            last=sec_occ(queries[i][0],queries[i][1],arr);
            output[i]=last-first+1;
        }
        return output;
    }
};
