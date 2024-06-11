class Solution {
  public:
    long long maxTip(int n, int x, int y, vector<int> &arr, vector<int> &brr) {
        long long tip=0;
        priority_queue<pair<int,int>> pq;
        for(int i=0; i<n; i++){
            pq.push({abs(arr[i]-brr[i]), i});
        }
        while(!pq.empty()){
            int i=pq.top().second;
            pq.pop();
            if(!y || ((arr[i]>=brr[i]) && x)){
                tip+=arr[i];
                x--;
            }
            else{
                tip+= brr[i];
                y--;
            }
        }
        return tip;
    }
};
