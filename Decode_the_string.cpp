class Solution {
  public:
    string decodedString(string &s) {
        stack<int>st;   // count Stack
        stack<string>stt;  // String stack
        string currVal="";
        int count=0;
        
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            
            if(isdigit(ch)){
                count=count*10+(ch-'0');
            }else if(ch=='['){
                st.push(count);
                stt.push(currVal);
                currVal="";
                count=0;
            }else if(ch==']'){ 
                int x =st.top();  // x= repeatTimes
                st.pop();
                
                string y=stt.top();  // y=decode
                stt.pop();
                
                for(int j=0;j<x;j++){
                    y+=currVal;
                }
                currVal=y;
            }else{
                currVal+=ch;
            }
        }
        return currVal;
    }
};
