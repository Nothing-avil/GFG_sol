class Solution {
  public:
    int romanToDecimal(string &s) {
        unordered_map<char, int>roman = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        int sum=0;
        int point=0;
        for(int i=s.size(); i>=0; i--){
            if(roman[s[i]]>= point){
                sum = sum+roman[s[i]]; 
            }
            else{
                sum = sum - roman[s[i]];
            }
            point= roman[s[i]];
        }
        return sum;
    }
};
