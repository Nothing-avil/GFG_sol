class Solution{
  public:
  vector<vector<int>> sumZeroMatrix(vector<vector<int>> a){
       int n=a.size();
        int m=a[0].size();
        int s[n][m];
        for(int i=0;i<n;i++)
        for(int j=0;j<m;j++) 
            s[i][j]=a[i][j]+ (j>0? s[i][j-1]:0);
        
        int maxarea=0,r=0,c=0,er=0,ec=0;
        for(int c1=0;c1<m;c1++){
            for(int c2=c1;c2<m;c2++){
                vector<int>temp(n,0);
                for(int i=0;i<n;i++)  temp[i]=s[i][c2]-(c1>0?s[i][c1-1]:0);
                unordered_map<int,int>mp;
                int curr=0;
                mp[0]=-1;
                for(int i=0;i<n;i++){
                    curr+=temp[i];
                    if(mp.find(curr)!=mp.end()){
                        int area=(i-mp[curr])*(c2-c1+1);
                        if(area>maxarea){
                            maxarea=area;
                            r=mp[curr]+1;
                            er=i;
                            c=c1;
                            ec=c2;
                        }
                    }else{
                        mp[curr]=i;
                    }
                }  
            }
        }
        vector<vector<int>>ans;
        
        for(int i=r;i<=er;i++){
            vector<int>temp;
            for(int j=c;j<=ec;j++)     temp.push_back(a[i][j]);
            ans.push_back(temp);
        }
        return ans;
    }
};
