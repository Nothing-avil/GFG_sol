class Solution {
  public:
    string chooseSwap(string &s) {
        int n=s.length();
        int f[26];
        for(int i=0; i<26; i++) f[i]=-1;
        for(int i=0; i<n; i++){
            int ind=s[i]-'a';
            if(f[ind]==-1) f[ind]=i;
        }
        char x='*', y='*';
        for(int i=0; i<n; i++){
            int ind=s[i]-'a';
            for(int j=0; j<ind; j++){
                if(f[j]>i){
                    x=j+'a';
                    y=s[i];
                    break;
                }
            }
            if(x!='*') break;
        }
        for(int i=0; i<n; i++){
            if(s[i]==x) s[i]=y;
            else if(s[i]==y) s[i]=x;
        }
        return s;
    }
};
