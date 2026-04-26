class Solution {
  public:
    vector<int> commonElements(vector<int> &a, vector<int> &b, vector<int> &c) {
         int j=0;
        int k=0;
        vector<int>ans;
        for(int i=0;i<a.size();i++){
            int num = a[i];
            
            while(j<b.size() && b[j]<num)j++;
            if(j==b.size())return ans;
            
            if(b[j]==num){ 
                
             while(k<c.size() && c[k]<num )k++;
             if(k==c.size())return ans;
             
             if(c[k]==num){
                 ans.push_back(num);
                 while(i+1<a.size() && a[i+1]==num)i++;
                 
             }
                
            }
            
        }
        
        return ans;
    }
};
