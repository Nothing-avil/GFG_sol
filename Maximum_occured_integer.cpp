class Solution {
  public:
    // l and r are input array
    // maxx : maximum in r[]
    // n: size of array
    // arr[] : declared globally with size equal to maximum in l[] and r[]
    // Function to find the maximum occurred integer in all ranges.
    int maxOccured(int n, int l[], int r[], int maxx) {
        vector<int> arr(maxx + 2, 0);
        for (int i = 0; i < n; i++) {
            arr[l[i]]++;
            arr[r[i] + 1]--;
        }
        int occur = 0;
        int ansindx = 0;
        int maxoccur = 0;
        
        for (int i = 0; i <= maxx; i++) {
            occur += arr[i];
            if (occur > maxoccur) {
                maxoccur = occur;
                ansindx = i;
            }
        }
        
        return ansindx;
    }
};
