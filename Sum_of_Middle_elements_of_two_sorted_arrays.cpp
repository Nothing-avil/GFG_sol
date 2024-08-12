//Position this line where user code will be pasted.
class Solution {
  public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
        int i = 0, j = 0, k = 0;
        int n1=arr1.size(), n2=arr2.size();
        vector<int> arr3(n1+n1);
        while (i<n1 && j <n2)
        {
            if (arr1[i] < arr2[j])
                arr3[k++] = arr1[i++];
            else
                arr3[k++] = arr2[j++];
        }
        while (i < n1)
            arr3[k++] = arr1[i++];
     
        while (j < n2)
            arr3[k++] = arr2[j++];
            
        if((n1+n2)&1){
            return arr3[((n1+n2)/2)];
        }
        else{
            return (arr3[((n1+n2)/2)]+arr3[((n1+n2)/2)-1]);
        }
    }
};
