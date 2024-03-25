class Solution{
public:	
    vector<string> res;
    void solve(string str, int n, int on){
        if(on<(str.size()+1)/2)  return;
        
        if(str.size()==n){
            res.push_back(str);
            return;
        }
        
        str.push_back('1');
        solve(str, n, on+1);
        str.pop_back();
        str.push_back('0');
        solve(str, n, on);
        str.pop_back();
    }
	vector<string> NBitBinary(int n)
	{
	    string str="";
	    solve(str, n, 0);
	    return res;
	}
};
