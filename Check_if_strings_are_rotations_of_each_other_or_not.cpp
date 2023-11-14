class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        // ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        s1+=s1;
        return s1.find(s2)!=-1;
    }
};
