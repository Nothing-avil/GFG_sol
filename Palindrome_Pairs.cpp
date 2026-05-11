class Solution {
  public:
    bool isPal(string& s, int i, int j) {
       while (i < j) {
           if (s[i] != s[j]) return false;
           i++;
           j--;
       }
       return true;
    }
    bool palindromePair(vector<string>& arr) {
        unordered_map<string ,int> freq;
        for (string& s : arr) {
            freq[s]++;
        }
        for (string& str : arr) {
            int n = str.length();
            for (int i=0; i<=n; i++) {
                string left = str.substr(0, i);
                string right = str.substr(i);
                if (isPal(left, 0, left.length()-1)) {
                    string rightRev = right;
                    reverse(begin(rightRev), end(rightRev));
                    if (freq.count(rightRev) && (str != rightRev || freq[rightRev] > 1)) {
                        return true;
                    }
                }
                if (isPal(right, 0, right.length()-1)) {
                    string leftRev = left;
                    reverse(begin(leftRev), end(leftRev));
                    if (freq.count(leftRev) && (str != leftRev || freq[leftRev] > 1)) {
                        return true;
                    }
                }
            }
            
        }
        return false;
    }
};
