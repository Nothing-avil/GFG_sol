class Solution{
	public:
	    vector<string> res;
	    void solve(int i, string& s, string str){
	        if(i==s.size()){
	            if(str==""){
	                return;
	            }
	            res.push_back(str);
	            return;
	        }
	        solve(i+1, s, str+s[i]);
	        solve(i+1, s, str);
	    }
		vector<string> AllPossibleStrings(string s){
		    solve(0, s, "");
		    sort(res.begin(), res.end());
		    return res;
		}
};
