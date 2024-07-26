class Solution {
  public:

    bool kPangram(string str, int k) {
        string s = "";
        for(auto i :str)
        {
            if(i== ' ')continue;
            else s+=i;
        }
        
        if(s.length()<26)return false;
        set<char>st;
        for(int i=0;i<s.length();i++)
        {
            st.insert(s[i]);
        }
        if(st.size()+k >=26 || st.size()>=26)return true;
        return false;
    }
};
