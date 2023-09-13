class Solution{
public:
    string findLargest(int N, int S){
            if((S==0 && N>1 ) || S>9*N) return "-1";
       string ans="";
       for(int i=0;i<S/9;i++) ans+='9';
       if(S%9) ans+='0'+S%9;
       while(ans.size()!=N) ans+='0';
       return ans;
    }
        
};
