class Solution {
  public:

    vector<int> bracketNumbers(string str) {
        vector<int> ans;
        stack<int> s;
        int i=1;
        for(char ch:str)
        {
            if(ch=='(')
            {
                s.push(i);
                ans.push_back(i);
                i++;
            }
            else if(ch==')')
            {
                ans.push_back(s.top());
                s.pop();
            }
            
        }
        return ans;
    }
};
