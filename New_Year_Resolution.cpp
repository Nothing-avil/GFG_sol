class Solution {
    int solve(int coins[], int n, int j, int sum) {
        if(sum != 0 && (sum % 20 == 0 || sum % 24 == 0 || sum == 2024)) return 1;
        if(j == n) return 0;
        int pick = solve(coins, n, j+1, sum+coins[j]);
        if(pick == 1) return 1;
        int notPick = solve(coins, n, j+1, sum);
        return pick || notPick;
    }
    public:
    int isPossible(int n, int coins[]) {
        return solve(coins, n, 0, 0);
    }
    
};
