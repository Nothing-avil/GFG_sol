class Solution {
  public:
    string removeKdigits(string S, int K) {
         stack<char> q;
        int n = S.size();
        q.push(S[0]);
        int i=1;
        while(i<n)
        {
            while(!q.empty() && q.top() > S[i] && K)
            {
                q.pop();
                K--;
            }
            q.push(S[i]);
            i++;
        }
        while(K>0)
        {
            q.pop();
            K--;
        }
        if(q.empty()) return "0";
        string a = "";
        while(!q.empty())
        {
            a += q.top();
            q.pop();
        }
        reverse(a.begin(),a.end());
        int z = 0;
        while(z<a.size())
        {
            if(a[z] == '0')
            z++;
            else break;
        }
        if(z == a.size())
            return "0";
        return a.substr(z);
    }
};
