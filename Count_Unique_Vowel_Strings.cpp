class Solution {
  public:
    int vowelCount(string& s) {
        string check = "aeiou";
        auto fact = [](int n){
            if(n == 0){
                return 0;
            }
            int result = 1;
            while(n > 1){
                result *= n;
                n--;
            }
            return result;
        };
        
        int anser = 1, count = 0;
        int vowel[26] = {0};
        for(char ch : s){
            if(check.find(ch) != string::npos){
                vowel[ch - 'a']++;
            }
        }
        for(int i =0; i<26; i++){
            if(vowel[i]){
                anser *= vowel[i];
                count++;
            }
        }
        return anser * (fact(count));
    }
};
