class Solution {
  public:
  
    struct cmp {
        bool operator()(tuple<int,int,int> &t1, tuple<int,int,int> &t2) {
            auto [a,b,c]=t1;
            auto [x,y,z]=t2;
            return a+b>x+y;
        }
    };
    int minTime(vector<int>& ranks, int n) {
        priority_queue<tuple<int,int, int>, vector<tuple<int,int,int>>, cmp> q;
        for( int i : ranks){
            q.push({0, i, i});
        }
        int ans = 0;
        while(n--){
            auto [a, b, c] = q.top();
            q.pop();
            a += b;
            b += c;
            ans = max(ans, a);
            q.push({a, b, c});
        }
        return ans;
    }
};
