class Solution {
  public:
    int gcd(int a, int b){
        if(b==0) return a;
        return gcd(b,a%b);
    }
    
    int minSteps(int m, int n, int d) {
        if(d>max(m,n)) return -1;
        if(d%gcd(m,n)!=0) return -1;
        int ans1 = solve(m,n,d);
        int ans2 = solve(n,m,d);
        return min(ans1,ans2);
    }
    
    int solve(int fromcap,int tocap,int d){
        int from = fromcap;
        int to =0;
        int steps = 1;
        while(from!=d && to!=d){
            int temp =  min(from,tocap-to);
            to+=temp;
            from-=temp;
            steps++;
            if(from==d || to==d){
                break;
            }
            if(from==0){
                from=fromcap;
                steps++;
            }
            if(to ==tocap){
                to=0;
                steps++;
            }
        }
        return steps;
    }
};
