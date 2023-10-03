class Solution{
    public:
    string colName (long long int n)
    {
        string s= "";
        while(n-->0){
            s.push_back((char)'A'+n%26);
            n=n/26;;
        }
        reverse(s.begin(), s.end());
        return s;
    }
};
