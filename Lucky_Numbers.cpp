class Solution{
public:
    bool isLucky(int n) {
        int c=2;
        while(true){
            if(n%c==0){
                return false;
            }
            if(c>n){
                return true;
            }
            n=(n-(n/c));
            c++;
        }
    }
};
