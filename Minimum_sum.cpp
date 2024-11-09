// User function template for C++

class Solution {
  public:
    string minSum(vector<int> &arr) {
        sort(arr.begin(), arr.end());
        string st = "";
        int carry=0;
        for(int i=arr.size()-1; i>=0; i-=2){
            if(arr[i]+carry==0) break;
            if(i-1>=0){
                if(arr[i]+arr[i-1]+carry>9){
                    int ss = (arr[i]+arr[i-1]+carry)%10;
                    st += to_string(ss);
                    carry=1;
                }
                else {
                    int ss = arr[i]+arr[i-1]+carry;
                    st += to_string(ss);
                    carry=0;
                }
            }
            else{
                int ss = carry+arr[i];
                st += to_string(ss);
                carry=0;
            }
        }
        if(carry>0){
            st += to_string(carry);
        }
        reverse(st.begin(), st.end());
        return st;
    }
};
