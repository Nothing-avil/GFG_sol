class Solution{
    public:
    int DivisibleByEight(string s){
        int n= s.size();
        if(n<4){
            if(stoi(s)%8==0){
                return 1;
            }else{
                return -1;
            }
        }
        string str= s.substr(n-3);
        if(stoi(str)%8==0){
            return 1;
        }else{
            return -1;
        }
    }
};
