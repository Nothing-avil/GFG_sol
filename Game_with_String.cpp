class Solution{
public:
    int minValue(string s, int k){
        map<int, int> mp;
        for(int i=0; i<s.size(); i++){
            mp[s[i]]++;
        }
        priority_queue<int> q;
        for(auto it:mp){
            q.push(it.second);
        }
        while(k>0){
            int t= q.top();
            q.pop();
            int x= t-1;
            q.push(x);
            k--;
        }
        int res=0;
        while(!q.empty()){
            res+= pow(q.top(), 2);
            q.pop();
        }
        
        return res;
    }
};
