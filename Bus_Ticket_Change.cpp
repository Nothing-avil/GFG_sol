class Solution {
  public:
    bool canServe(vector<int> &bills) {
        int n = bills.size();
        int five=0,ten=0;
        for(int i=0;i<n;i++){
            if(bills[i]==20){
                if(ten && five){
                    ten--;
                    five--;
                }
                else if(five>=3){
                    five-=3;
                }
                else return false;
            }
            else if(bills[i]==10){
                ten++;
                if(five)five--;
                else return false;
            }
            else five++;
        }
        return true;
    }
};
