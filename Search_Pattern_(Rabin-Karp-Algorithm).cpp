class Solution{
    public:
        vector <int> search(string pattern, string text){
            vector<int> ans ;
            int i = 0;
            while(i<text.size()){
                bool flag = true;
                int k = 0;
                int j = i;
                while(k<pattern.size()){
                    if(pattern[k] != text[j]){
                        flag  = false;
                        break;
                    }
                    j++;
                    k++;
                }
                if(flag){
                    ans.push_back(i+1);
                }
                i++;
            }
            return ans;
        }
};
