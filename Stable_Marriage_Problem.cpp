class Solution {
  public:
    vector<int> stableMarriage(vector<vector<int>> &men, vector<vector<int>> &women) {
        int n=men.size();
        vector<int>usedMen(n, -1);
        vector<int>usedWomen(n, -1);
        queue<int>unusedMen;
        vector<vector<int>>rank(n, vector<int>(n, -1));
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                rank[i][women[i][j]]=j;
            }
        }
        vector<int>menAt(n, 0);
        for(int i=0; i<n; i++){
            unusedMen.push(i);
        }
        while(!unusedMen.empty()){
            int node=unusedMen.front();
            unusedMen.pop();
            int woman=men[node][menAt[node]];
            menAt[node]++;
            if(usedWomen[woman]==-1){
                usedWomen[woman]=node;
                usedMen[node]=woman;
            }else{
                int currentMan=usedWomen[woman];
                if(rank[woman][currentMan]>rank[woman][node]){
                    usedWomen[woman]=node;
                    usedMen[node]=woman;
                    unusedMen.push(currentMan);
                    usedMen[currentMan]=-1;
                }else{
                    unusedMen.push(node);
                }
            }
        }
        return usedMen;
    }
};
