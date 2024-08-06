class Solution {
  public:
    int isValid(string str) {
        int dot=-1, c=0;
        for(int i=0; i<str.size(); i++){
            if(str[i]!= '.'){
                if(dot==-1 && str[i]=='0' && (i+1)!=str.size() && str[i+1]!='.'){
                    return 0;
                }
                else if(dot==-1){
                    dot=0;
                    c++;
                }
                dot= dot*10 + (str[i]-'0');
            }
            else{
                if(!(dot>=0 && dot<=255)){
                    return 0;
                }
                dot=-1;
            }
        }
        if(!(dot>=0 && dot<=255)){
            return 0;
        }
        if(c==4){
            return 1;
        }
        return 0;
    }
};
