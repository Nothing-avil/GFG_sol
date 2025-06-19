class Solution {
  public:
    string caseSort(string& str) {
        int n = str.size();
        string a="",b="";
        for(int i=0;i<n;i++){
            if(str[i]>='A' and str[i]<='Z')
                a+=str[i];
            else
                b+=str[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
    
        int j=0,k=0;
        string w = "";
        for(int i=0;i<n;i++){
            if(str[i]>='A' and str[i]<='Z')
                w+=a[j++];
            else
            w+=b[k++];
        }
        return w;
    }
};
