class Solution {
  public:
    string countAndSay(int n) {
        string prev = "1";
        string ans = "";
        
        for(int i = 2; i <= n; i++){
            int j = 0;
            int prev_size = prev.size();
            
            while(j < prev_size){
                char present_char = prev[j];
                int cnt = 1;
                j++;
                while(prev[j]==present_char) cnt++,j++;
                
                //cout<<" cnt "<<cnt<<'\n';
                ans += to_string(cnt);
                ans += present_char;
            }
            
            //cout<<" before prev:"<<prev<<'\n';
            prev = ans;
            ans = "";
            //cout<<" after prev:"<<prev<<'\n';
        }
        
        return prev;
    }
};
