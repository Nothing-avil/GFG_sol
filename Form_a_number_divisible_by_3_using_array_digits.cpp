class Solution {
  public:
    int isPossible(int N, int arr[]) {
        int sum = 0;
        for(int i=0;i<N;i++){
            int m = arr[i];
            while(m>0){
                int a = m%10;
                sum+=a;
                m=m/10;
            }
        }
        if(sum%3==0){
            return 1;
        }
        return 0;
    }
};
