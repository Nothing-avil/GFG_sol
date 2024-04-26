class Solution {
  public:
    vector<int> FindExitPoint(int n, int m, vector<vector<int>>& mat) {
        int lol=0;
        int yool=0;
        
        int a=0;
        int b=0;
        
        while(lol+a>=0 && yool+b>=0 && lol+a<n && yool+b<m) { 
            lol+=a;
            yool+=b;
            if (mat[lol][yool]==1) {
                if ((a==0 && b==1) || (a==0 && b==0)) { a=1; b=0;}
                else if (a==1 && b==0) { a=0; b=-1;}
                else if (a==0 && b==-1) { a=-1; b=0;}
                else if ((a==-1 && b==0)) { a=0; b=1;}
                mat[lol][yool]=0;
            }
            else if (a==0 && b==0) {a=0; b=1;}
        }
        return {lol,yool};
    }
};
