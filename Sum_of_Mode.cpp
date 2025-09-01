class Solution {
  public:
    int sumOfModes(vector<int>& arr, int k) {int n = arr.size();
        unordered_map<int, int> freq;
        set<pair<int, int>> ss;
        int modeSum = 0;

        int i = 0, j = 0;
        while (j - i != k) {
            int val = arr[j];
            pair<int, int> p = {n - freq[val], val};
            if (ss.find(p) != ss.end()) {
                ss.erase(p);
            }
            freq[val]++;
            p = {n - freq[val], val};
            ss.insert(p);
            j++;
        }

        modeSum += (*ss.begin()).second;

        while (j < n) {
            int val = arr[i];
            pair<int, int> p = {n - freq[val], val};
            if (ss.find(p) != ss.end()) {
                ss.erase(p);
            }
            freq[val]--;
            p = {n - freq[val], val};
            ss.insert(p);

            val = arr[j];
            p = {n - freq[val], val};
            if (ss.find(p) != ss.end()) {
                ss.erase(p);
            }
            freq[val]++;
            p = {n - freq[val], val};
            ss.insert(p);

            modeSum += (*ss.begin()).second;
            i++;
            j++;
        }
        return modeSum;
    }
};l
