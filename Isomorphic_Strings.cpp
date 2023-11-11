class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
         if(str1.length() != str2.length())return false;
        
        unordered_map<char , char>mp1;
        unordered_map<char , char>mp2;
        
        for(int i=0;i<str1.length();i++){
            mp1[str1[i]] = str2[i];
            mp2[str2[i]] = str1[i];
        }
        
        for(int i=0;i<str1.length();i++){
            if(mp1[str1[i]] != str2[i])return false;
            if(mp2[str2[i]] != str1[i])return false;
        }
        
        return true;
    }
};
