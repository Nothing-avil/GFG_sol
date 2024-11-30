class Solution {
  public:
    // Function is to check whether two strings are anagram of each other or not.
    bool areAnagrams(string& s1, string& s2) {
        int arr[26] = {0};
        for(char ch : s1){
            arr[ch - 'a']++;
        }
        for(char ch : s2){
            arr[ch - 'a']--;
        }
        for(int i=0; i<26; i++){
            if(arr[i] != 0){
                return false;
            }
        }
        return true;
    }
};
