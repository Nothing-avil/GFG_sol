class Solution {
  public:
    int isPallindrome(long long int N) {
        int ct = log2(N),i = 0;
        while(i <= ct){
            if(((N&(1<<i)) && !(N&(1<<ct))) || (!(N&(1<<i)) && (N&(1<<ct)))) return 0;
            ++i;
            --ct;
        }
        return 1;
    }
};
