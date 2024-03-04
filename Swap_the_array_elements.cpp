/*Function to swap array elements
* arr : array input
* n : number of elements in array
*/
class Solution{
  public:
    void swapElements(int arr[], int n){
        for(int i=0; i<n-2; i++){
            swap(arr[i], arr[i+2]);
        }
    }
};
