class Solution {
  public:
    void segregate0and1(vector<int> &a) {
        int lo = 0;
        int hi = a.size() - 1;
        int mid = 0;
        while (mid <= hi) {
            switch (a[mid]) {
            case 0:
                swap(a[lo++], a[mid++]);
                break;
            case 1:
                mid++;
                break;
            }
        }
    }
};
