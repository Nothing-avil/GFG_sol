class Solution {
public:
    int kthElement(int k, vector<int>& arr1, vector<int>& arr2) {
        int i = 0, j = 0;
        int n1 = arr1.size(), n2 = arr2.size();
        while (i < n1 && j < n2) {
            if (arr1[i] < arr2[j]) {
                if (--k == 0) {
                    return arr1[i];
                }
                i++;
            } else {
                if (--k == 0) {
                    return arr2[j];
                }
                j++;
            }
        }
        while (i < n1) {
            if (--k == 0) {
                return arr1[i];
            }
            i++;
        }
        while (j < n2) {
            if (--k == 0) {
                return arr2[j];
            }
            j++;
        }
    }
};
