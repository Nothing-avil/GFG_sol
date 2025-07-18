class Solution {
  public:
    int lcmTriplets(int n) {
        if(n < 3){
            return n;
        }
        int a = n - 1;
        int b = n - 2;
        int c = n - 3;
        if(n % 2 != 0){
            int answer = (n*a)/__gcd(n, a);
            return (answer*b)/__gcd(answer, b);
        }
        int answer1 = (n*a)/__gcd(n, a);
        int cal1 = (answer1*c)/__gcd(answer1, c);
        int answer2 = (b*a)/__gcd(a, b);
        int cal2 = (answer2*c)/__gcd(answer2, c);
        return max(cal1, cal2);
    }
};
