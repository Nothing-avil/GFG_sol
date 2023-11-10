class Solution{   
public:
    string printMinNumberForPattern(string S){
    string ans(1,'1');
    int counter = 0;
    for(int i = 0; i < S.length(); i++) {
        if(S[i] == 'I') {
            ans.push_back(i + 2 + '0');
            counter = ans.length() - 1;
        }
        else {
            char temp = i + 2 + '0';
            string s(1,temp);
            ans.insert(counter, s);
        }
    }
    return ans;
    }
};
