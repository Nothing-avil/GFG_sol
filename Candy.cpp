class Solution {
  public:
    int minCandy(int N, vector<int> &ratings) {
        vector<int> candies(N,1);
        for(int i=1;i<N;i++){
            if(ratings[i]>ratings[i-1]){
                candies[i]=candies[i-1]+1;
            }
        }
        for(int i=N-1;i>0;i--){
            if(ratings[i-1]>ratings[i] && candies[i-1]<=candies[i]){
                candies[i-1]=candies[i]+1;
            }
        }
        return accumulate(candies.begin(),candies.end(),0);
    }
};
