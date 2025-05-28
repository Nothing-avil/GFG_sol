class Solution {
  public:
    bool ValidCorner(vector<vector<int> >& mat) {
        map<int,vector<int>>mp;
        int n = mat.size();
        int m = mat[0].size();
        for(int i = 0 ; i<n ; i++){
            for(int j = 0 ; j<m ; j++){
                if(mat[i][j]==1){
                   mp[i].push_back(j);
                }
            }
        }
        for(auto x:mp){
            int row = x.first ;
            vector<int>temp1 = x.second;
            for(auto y:mp){
                if(y.first!=row){
                    vector<int>temp2= y.second;
                    int  cnt = 0 ;
                    map<int,int>mp3;
                    for(int i =0 ;i<temp1.size();i++)  mp3[temp1[i]]++;
                    for(int i =0 ;i<temp2.size();i++)  mp3[temp2[i]]++;
                    for(auto x:mp3){
                        if(x.second>=2)cnt++;
                    }
                    if(cnt>=2) return 1;
                }
            }
        }
        return 0 ; 
    }
};
