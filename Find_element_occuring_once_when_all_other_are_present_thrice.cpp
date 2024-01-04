class Solution {
  public:
    int singleElement(int arr[] ,int N) {
        int one=0;
        int two=0;
        for(int i=0;i<N; i++){
            one= (arr[i]^one)&(~two);
            two= (arr[i]^two)&(~one);
        }
        return one;
    }
};
