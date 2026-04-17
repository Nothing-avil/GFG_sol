class Solution {
  public:
    bool canFormPalindrome(string &s) {
        int arr[27] = {0};
        for(char ch : s){
            arr[ch - 'a']++;
        }
        int c = 0;
        for(int i=1; i<=26; i++){
            if(arr[i]%2 != 0){
                c++;
            }
            if(c > 1){
                return false;
            }
        }
        return true;
    }
};
