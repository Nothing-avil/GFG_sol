class Solution {
  public:
    int getNumber(string &s, int i, int j){
        int ans=0;
        for(int k=i;k<j;k++){
            ans=ans*10+(s[k]-'0');
        }
        return ans;
    }
    bool isAdditiveSequence(string s) {
        int n=s.length();
        int a,b,c,count;
        for(int i=2;i<n;i++){
            for(int j=1;j<i;j++){
                a=getNumber(s,0,j);
                b=getNumber(s,j,i);
                int k=i;
                count=0;
                c=0;
                while(k<n && c<a+b){
                    c=c*10+(s[k]-'0');
                    if(c==a+b){
                        count++;
                        a=b;
                        b=c;
                        c=0;
                    }
                    k++;
                }
                if(count>0 && k==n && c==0){
                    return true;
                }
            }
        }
        return false;
    }
};
 
