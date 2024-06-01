class Solution {
  public:
    string oddEven(string s) {
        int temp[26]={0};
        int x=0,y=0;
        for(int i=0;i<s.length();i++)
            temp[s[i]-'a']++;
            
        for(int i=0;i<26;i++){
            if((i+1)%2){
                if(temp[i]%2)y++;
            }
            else{
                if(temp[i]%2==0 and temp[i])x++;
            }
        }
        return (x+y)%2==1?"ODD":"EVEN";
    
    }
};
